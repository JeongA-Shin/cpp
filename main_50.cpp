#include <iostream>
using namespace std;
//4중 포문이란 것도 당연히 있음(그냥 막 해보기)

int arr[6][55];
int main() {


	int row_1, col_1;
	cin >> row_1 >> col_1;

	for (int i = 0; i < row_1; i++) {
		for (int j = 0; j < col_1; j++) {
			int num;
			cin >> num;
			arr[i][j] = num;
		}
	}


	int row, col;
	cin >> row>> col;

	int max = -90;
	int sum = 0;


	for (int i = 0; i < row_1-row+1; i++) {
		for (int j = 0; j < col_1-col+1; j++) {
			sum = 0;
			for (int k = i; k < i+row; k++) {
				for (int s = j; s < j+col; s++) {
					sum += arr[k][s];
				}
			}
			if (max < sum) {
				max = sum;
			}
		}
	}

	cout << max << endl;

}