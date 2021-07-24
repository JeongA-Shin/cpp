#include <iostream>
#include <algorithm>
using namespace std;

//이진 검색의 활용 - 단순 인덱스가 아니라, 그 "총량"에 대해 생각해야 할 때
//결정 알고리즘
//43번과 유사

int possible(vector<int>&vec,int middle,int c){
	bool condition = true;
	int cnt = 1;

	while (condition) {
		
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] + middle > vec[i+1]) {
				if (vec[i] + middle > vec.back()) {
					return 7;
					condition = false;
					break;
				}
				else {
					cnt++;
				}
			}
			else if (vec[i] + middle < vec[i+1]) {
				return 6;
				condition = false;
				break;
			}
		}

	}

	if (cnt == c) {
		return c;
	}
	else {
		return 0;
	}

	

}

int main() {
	int N;
	cin >> N;

	int* arr = new int[N + 1];
	int C;
	cin >> C;

	for (int i = 1; i < N; i++) {
		int location;
		cin >> location;
		arr[i] = location;
	}

	sort(arr+1, arr + N + 1);


	int front = arr[1];
	int rear = arr[N];

	while (front < rear) {
		int middle = (front + rear) / 2; // 두 말 사이의 거리로 가능한 수

		if (possible(vec, middle, C)==C) {
			cout << middle << endl;
			break;
		}
		else if(possible(vec, middle, C) == 7){
			rear = middle - 1;
		}
		else {
			front = middle + 1;
		}


	}
	

	delete[] arr;

}