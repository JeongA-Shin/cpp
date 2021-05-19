#include <iostream>
#include <string>
using namespace std;


int main() {

	string input;

	cin >> input;

	int length = input.length();


	int sum = 0;
	for (int i = 0; i < length; i++) {
		if (input[i] == '(') {
			sum++;
		}
		else {
			sum--;
		}

		if (sum < 0) {
			break;
		}
	}

	if (sum == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}