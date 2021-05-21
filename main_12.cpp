#include <iostream>
using namespace std;




int main() {

	int N;

	cin >> N;

	int cnt = 1; // 개수(몇 자리 수인지)
	int standard = 9;


	int sum = 0;
	int cnt_num = 9;//해당 cnt 당 몇 개의 수가 있는지
	int previous_standard= 0;
	while (N > standard) {
		sum += cnt * cnt_num;
		cnt++;
		cnt_num *= 10;//9개 90개 900개
		previous_standard = standard;
		standard = standard * 10 + 9; //  9 99 999
	}


	sum += (N - previous_standard) * cnt;

	cout << sum << endl;



}