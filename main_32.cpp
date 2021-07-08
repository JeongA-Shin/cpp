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

	int a = 1000;

	for (int i = 0; i < N-1; i++) {
		int* min=&a;
		int* standard = &arr[i];

		for (int j = i+1; j < N; j++) {
			if (arr[j] < *min) {
				min = &arr[j];
			}
		}

		if (*min < *standard) {
			swap(*min, *standard);
		}
	}



	for (int i = 0; i < N; i++) {
		cout << arr[i] <<" ";
	}



	delete[] arr;
	


	

}