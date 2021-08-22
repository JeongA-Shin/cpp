#include <iostream>
using namespace std;

void recur(int x) {
	int quote = x / 2;
	int remainder = x % 2;

	if (quote == 1) { // 재귀의 종료지점. 더 이상 더 들어가지 않기
		cout << quote << remainder;
		return;
	}
	else {
		recur(quote);
	}

	cout << remainder;
}


int main() {

	int num;
	cin >> num;

	recur(num);
}