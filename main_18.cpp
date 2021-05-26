#include <iostream>
using namespace std;

int main() {
	int N, M;

	cin >> N >> M;


	int sec = 0; //그냥 연속 경보음
	bool exist = false;

	int measure;
	int max = 0; //최대 연속 경보음

	for (int i = 0; i < N; i++) {
		cin >> measure;
		if (measure > M) {
			sec++;
			if (max < sec) {
				max = sec;
			}
			exist = true;
		}
		else {
			sec = 0;
		}
	}

	if (exist == true) {
		cout << max << endl;
	}
	else {
		cout << -1 << endl;
	}
}