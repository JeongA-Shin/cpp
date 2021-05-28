#include <iostream>
using namespace std;


int main() {
	int N, K;

	cin >> N >> K;

	int* arr = new int[N];

	int temperature;
	for (int i = 0; i < N; i++) {
		cin >> temperature;
		arr[i] = temperature;
	}


	int max = 0;
	int sum = 0;

	for (int i = 0; i <= N-K; i++) {
		
		for (int j=i; j < i + K; j++) {
			sum += arr[j];
		}


		if (max < sum) {
			max = sum;
		}


		sum = 0;
	}


	cout << max << endl;

	delete[] arr;
}