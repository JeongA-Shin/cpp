#include <iostream>
using namespace std;

int main() {

	int N;

	cin >> N;

	int cnt = 0;


	/*
	while (N > 0) {
		N = N / 10;
		cnt++;
	}
	//cnt는 몇 자리수인지 알 수 있음
	*/


	for (int i = 1; i < N+1; i++) {
		int temp = i;
		while (temp > 0) {
			temp = temp / 10;
			cnt++;
		}
	}

	cout << cnt << endl;



}