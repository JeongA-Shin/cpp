#include <iostream>
using namespace std;

int main() {

	int** arr = new int* [3];

	for (int i = 0; i < 3; i++) {
		arr[i] = new int[10];
	}


	int A, B;

	for (int i = 0; i < 10; i++) {
		cin >> A;
		arr[0][i] = A;
	}

	for (int i = 0; i < 10; i++) {
		cin >> B;
		arr[1][i] = B;
	}


	int suma = 0; 
	int sumb = 0;

	for (int j = 0; j < 10; j++) {
		if (arr[0][j] == arr[1][j]) {
			arr[2][j] = 'D';
			suma++;
			sumb++;
		}
		else if (arr[0][j] > arr[1][j]) {
			arr[2][j] = 'A';
			suma += 3;
		}
		else {
			arr[2][j] = 'B';
			sumb += 3;
		}
	}

	cout << suma << " " << sumb << endl;
	if (suma > sumb) {
		cout << 'A' << endl;
	}
	else if (suma < sumb) {
		cout << 'B' << endl;
	}
	else {
		// 그냥 last winner 변수를 하나 더 만들어서 a이면 1 아니면 0을 넣는 걸 승점 계산시 해주면 더 편함
		bool flag = false;
		for (int i = 9; i >= 0; i--) {
			if (arr[2][i] != 'D') {
				cout << char(arr[2][i]) << endl;//제일 마지막에 이긴 사람
				flag = true;
				break;
			}
		}

		if (flag == false) {
			cout << "D" << endl;
		}
	}




	for (int i = 0; i < 3; i++) {
		delete[] arr[i];
	}

	delete[] arr;
}