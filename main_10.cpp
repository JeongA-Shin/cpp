#include <iostream>
using namespace std;




//자릿수의 합을 출력함
int digit_sum(int x) {

	int sum = 0;

	while (x >= 1) {
		sum += x % 10;
		x =x / 10;		
	}

	return sum;

}

int main() {

	int N;

	cin >> N;


	int input;
	int max = 0;
	int res = 0;

	for (int i = 0; i < N; i++) {
		cin >> input;
		if (digit_sum(input) > max) {
			max = digit_sum(input); //자릿수의 합의 최대
			res = input; // 그리고 해당 숫자
		}
		else if (digit_sum(input) == max) {
			if (input > res) {
				res = input;
			}
		}
	}
	
	cout << res << endl;


}