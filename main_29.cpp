#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int temp = i;
		while (temp > 0) {
			int num = temp % 10;
			if (num == 3) {
				cnt++;
			}
			temp /= 10;
		}
	}

	cout << cnt << endl;
}