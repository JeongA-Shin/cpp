#include <iostream>
using namespace std;

int main() {

	

	int input;
	cin >> input;
	//test case에서 input인 정수의 크기가 int로 표현될 수 있는 범위를 넘어가서 입력을 int가 아니라!
	//string으로 받아야함


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