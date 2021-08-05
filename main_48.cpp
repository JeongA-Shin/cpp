#include <iostream>
using namespace std;

int arr[9][9];
int main() {

	//반올림 어떻게 하는지 확실하게 익히기
	//최종값(여기서는 최종으로 구한 평균값)에 0.5를 더해주고 int화 시키면 됨


	for (int i = 0; i < 9; i++) {
		int sum = 0;
		int avg = 0;
		for (int j = 0; j < 9; j++) {
			int num;
			cin >> num;
			arr[i][j] = num;
			sum += num;
		}

		avg = (sum /9.0)+0.5;
		cout << avg << " ";

		int min_distance = 500;
		int res = -100;
		for (int j = 0; j < 9; j++) {
			int distance = abs(arr[i][j] - avg);
			if (distance < min_distance) {
				min_distance = distance;
				res = arr[i][j];
			}
			else if (distance == min_distance) {
				if (arr[i][j] > res) {
					res = arr[i][j];
				}
			}
		}

		cout << res << endl;

	}


	


	
}