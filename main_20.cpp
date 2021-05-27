#include <iostream>
using namespace std;


int main() {

	int N;
	cin >> N;

	int** arr = new int*[4]; // {횟수, A의 정보, B의 정보, 승자}

	for (int i = 0; i < 4; i++) {
		arr[i] = new int[N]; //횟수대로 칸 설정
	}

	int A;
	for (int j = 0; j < N; j++) {
		cin >> A;//A의 정보 입력
		arr[1][j] = A;
	}


	int B;
	for (int j = 0; j < N; j++) {
		cin >> B;//A의 정보 입력
		arr[2][j] = B;
	}


	for (int i = 0; i < N; i++) {
		if (arr[1][i] == 1 && arr[2][i] == 2) {
			arr[3][i] = 'B';
		}
		else if (arr[1][i] == 1 && arr[2][i] == 3) {
			arr[3][i] = 'A';
		}
		else if (arr[1][i] == 2 && arr[2][i] == 3) {
			arr[3][i] = 'B';
		}
		else if (arr[1][i] == 2 && arr[2][i] == 1) {
			arr[3][i] = 'A';
		}
		else if (arr[1][i] == 3 && arr[2][i] == 1) {
			arr[3][i] = 'B';
		}
		else if (arr[1][i] == 3 && arr[2][i] == 2) {
			arr[3][i] = 'A';
		}
		else {
			arr[3][i] = 'D';
		}
	}


	for (int i = 0; i < N; i++) {
		cout << char(arr[3][i]) << endl;
	}




	for (int i = 0; i < 4; i++) {
		delete[] arr[i];
	}

	delete[] arr;


}