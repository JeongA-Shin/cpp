#include <iostream>
using namespace std;



int digit_sum(int x) {


	int res = 0;

	while (x > 0) {

		int tmp = 0;
		tmp = x % 10; //일의 자리만 남음
		res += tmp;
		x = x / 10; //x는 한 자리 올라감

	}

	return res;

}

int main() {


	/* 내가 한 거 --> 너무 복잡함;;;
	int n;
	cin >> n;

	int** sum = new int*[2]; //[row] 부분// 가로칸이 크게 2개있음

	for (int i = 0; i < 2; i++) {
		sum[i] = new int[n]; //세로부분
	}

	int num;

	for (int j = 0; j < n; j++) {

		cin >> num;
		sum[0][j] = num; // 제일 위 가로줄에는 입력한 값들이 들어간다.
	}



	
	for (int j = 0; j < n; j++) {

		int temp = digit_sum(sum[0][j]);
		sum[1][j] = temp; // 두 번째 가로줄에는 각 칸마다 digit_sum을 해준 값들이 들어간다.
	}


	int pre = 0;
	int post = 0;

	int pre_sum = 0;
	int post_sum = 0;


	int result=0;

	pre_sum = sum[1][0];
	pre = 0;// 윗줄에서 칸 위치

	for (int k = 1; k < n; k++) {
		post_sum = sum[1][k];
		post = k;

		if (pre_sum > post_sum) {
			result = sum[0][pre];

		}else if (pre_sum < post_sum) {
			result = sum[0][post];

		}else {
			if (sum[0][pre] > sum[0][k]) {
				result = sum[0][pre];
			}
			else{
				result = sum[0][post];
			}
		}

		pre_sum = sum[1][pre];
		pre = post;

		
	}


	

	cout << result << endl;

	*/


	int n, num, i, sum, max = -1234, res;

	//max는 합을 보는 것
	//res는 입력한 숫자를 저장한 것
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {

			if (num > res) {
				res = num;
			}
		}
	}


	cout << res << endl;

}