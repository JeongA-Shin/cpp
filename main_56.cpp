#include <iostream>
using namespace std;


void elements(int para) {

	if (para != 1) { //1이면 더 이상 재귀하지 않는다( 즉 종료지점을 정해준 거임)
		elements(para - 1);
	}

	cout << para<<" ";
}


int main() {

	int n;
	cin >> n;

	elements(n);
}