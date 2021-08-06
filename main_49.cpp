#include <iostream>
using namespace std;


int blocks[15][15];
int front_arr[15];
int right_arr[15];
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int front;
		cin >> front;
		front_arr[i] = front;
	}


	for (int i = 0; i < n; i++) {
		int right;
		cin >> right;
		right_arr[i] = right;
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			blocks[j][i] = front_arr[i];
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (blocks[i][j] > right_arr[i]) {
				blocks[i][j] = right_arr[i];
			}
		}
	}


	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum += blocks[i][j];
		}
	}

	cout << sum << endl;
}