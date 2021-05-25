#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;


	int cnt[10] = { 0 };
	while (input > 0) {
		int num = input;
		int temp = num % 10;
		cnt[temp]++;
		input = input / 10;
	}


	int max = 0;
	int res = 0;
	for (int i = 0; i < 10; i++) {
		if (max <= cnt[i]) {
			max = cnt[i]; //어차피 i는 커지니까 계속 바꿔주면 답이 여러개인 경우, 제일 큰 수가 들어가게 된다.
			res = i;
		}
	}

	cout << res << endl;


}