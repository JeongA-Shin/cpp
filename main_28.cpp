#include <iostream>
using namespace std;


int main() {

	int N;
	cin >> N;

	int fac = 1;

	for (int i = 1; i < N + 1; i++) {
		fac *= i;
	}

	int cnt = 0;
	while (fac > 0) {
		int num = fac % 10;
		if (num == 0) {
			cnt++;
		}
		else {
			break;
		}
		fac /= 10;
	}

	cout << cnt << endl;

}