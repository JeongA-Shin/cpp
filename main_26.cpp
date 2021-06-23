#include <iostream>
using namespace std;


int main() {
	int N;
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		int ability;
		cin >> ability;
		arr[i] = ability;
	}


	for (int i = 0; i < N; i++) {
		int rank = i + 1;//현재 i의 등수
		for (int j = i - 1; j >= 0; j--) { //i기준으로 그 앞의 요소들인 j와 비교한다.
			if (arr[j] < arr[i]) { // 앞에 있는 사람이 더 작으면 i가 앞지를 수 있음
				rank--;
			}
		}
		cout << rank << " ";
	}



	delete[] arr;
}