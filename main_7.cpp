#include <iostream>
#include <string>
using namespace std;

int main() {


	string input;

	getline(cin,input); //cin이 아니라! getline으로 입력을 받아야! 띄어쓰기에 신경쓰지 않고! 한 줄로 입력받을 수 있음

	string res;

	int length = input.length();

	for (int i = 0; i < length; i++) {
		if (input[i] > 64 && input[i] < 91) { //대문자이면
			input[i] = input[i] + 32; //소문자로 바꿈
		}

		if (input[i] != ' ') { //공백인지 확인할 때는 ' '이다!!! " "로 하면 오류남 !!!
			res += input[i];
		}
	}

	cout << res << endl;


}