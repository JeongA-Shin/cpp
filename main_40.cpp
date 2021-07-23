#include <iostream>
#include <vector>
using namespace std;

//얘도 투 포인터 알고리즘이면 더 쉬울 듯
//현재는 time limit

int main() {
	int A;
	cin >> A;

	vector<int> vec;


	for (int i = 0; i < A; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}


	int B;
	cin >> B;

	vector<int> vec2;

	for (int i = 0; i < B; i++) {
		int temp;
		cin >> temp;
		vector<int>::iterator iter;
		for (iter = vec.begin(); iter != vec.end(); iter++) {
			if (*iter == temp) {
				vec2.push_back(temp);
			}
		}
	}


	// 버블 정렬
	for (int i = 0; i < vec2.size() - 1; i++) {//각 회전마다 비교의 기준이 되는 대상

		for (int j = i + 1; j < vec2.size(); j++) {
			if (vec2[i] > vec2[j]) {
				int temp = vec2[i];
				vec2[i] = vec2[j];
				vec2[j] = temp;
			}
		}
	}


	vector<int>::iterator iter2;
	for (iter2 = vec2.begin(); iter2 != vec2.end(); iter2++) {
		cout << *iter2 << " ";
	}



	cout << endl;
}