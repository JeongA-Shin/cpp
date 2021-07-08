#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}



	for (int i = 1; i < N; i++) {
		int key = arr[i];
		for (int j = 0; j < i; j++) { //key를 key의 앞(왼쪽)에 있는 요소들과 비교해서 key의 위치를 찾아 넣어준다.
			if (arr[j] > key) { //처음부터 비교해서 처음으로 key보다 더 큰 게 나오면, 그 자리(j)가 key가 새롭게 들어갈 자리임
				//그러면 그 자리 뒤에서부터 key자리까지 한 자리씩 밀려야함
				for (int k = i; k > j; k--) {
					arr[k] = arr[k - 1];
				}
				arr[j] = key;  //key값이 들어갈 새로운 위치
				break;
			}
		}
	}


	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	

	delete[] arr;
}