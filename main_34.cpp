#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int main() {

	int N;
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}



	for (int j = 0; j < N-1; j++) { //ÃÑ È¸Àü È½¼ö

		for (int i = 0; i < (N-1)-j; i++) { //ÇÑ ¹øÀÇ È¸Àü
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
			}
		}
	}

	
	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}
	
	

	delete[] arr;
}