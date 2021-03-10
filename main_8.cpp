#include <iostream>
using namespace std;

int main() {

	//1.
	//(는 +1, )는 -1로 치환해서 생각하자.
	//그러면 누적값이 0이어야 올바른 괄호가 된다.

	// 2. 
	// )( 이거 같은 경우에는 누적값이 0이라도 안 된다.
	//중간에 )가 (보다 개수가 더 많아지면 안 된다.
	string input;

	cin >> input;

	int length = input.length();

	int sum = 0;
	int cnt_left = 0;
	int cnt_right = 0;


	bool res = true;

	for (int i = 0; i < length; i++) {
		if (input[i] == '(') {
			cnt_left++;
			sum++;
		}
		else {
			cnt_right++;
			sum--;
		}

		if (cnt_right > cnt_left) {
			res = false;
			break;
		}

	}


	if (sum != 0) {
		res = false;
	}
	
	
	
	if (res == true) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}


}