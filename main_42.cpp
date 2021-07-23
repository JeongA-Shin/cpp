#include <iostream>
#include <vector>
using namespace std;

//이분검색

int main() {

	int n;
	cin >> n;


	int m;
	cin >> m;

	vector<int> vec;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		vec.push_back(num);
	}

	// 삽입정렬
	for (int i = 1; i < n; i++) {
		int key = vec[i];
		for (int j = i - 1; j >= 0; j--){
			if (vec[j] > key) {
				vec[j + 1] = vec[j];// 더 큰 걸 만나면 해당 숫자를 한 칸 앞으로 당기고(더 큰 인덱스로)
				vec[j] = key; // 그 숫자의 자리에는 key가 들어가게 함
			}
			
		}
	}

	int front = 0;
	int rear = vec.size() - 1;
	int middle = (front + rear) / 2;

	while (front <= rear) {
		if (vec[middle] == m) {
			cout << middle + 1 << endl;
			break;
		}
		else if (m > vec[middle]) {
			front = middle + 1;
			middle = (front + rear) / 2;
		}
		else {
			rear = middle - 1;
			middle = (front + rear) / 2;
		}
	}
	

}