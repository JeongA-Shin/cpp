#include <iostream>
#include <string>
using namespace std;

int main() {

	string input;
	cin >> input;

	int length = input.length();

	int C = 0;
	int H = 0;
	for (int i = 0; i < length; i++) {
		if (input[i] == 'H') {
			H = i;
			break;
		}
	}


	string c_num = "0";
	string h_num = "0";

	if (H == 1) {
		c_num = "1";
	}
	else {
		for (int i = 1; i < H; i++) {
			c_num += input[i];
		}

	}
	
	if (H == length - 1) {
		h_num = "1";

	}
	else {
		for (int i = H + 1; i < length; i++) {
			h_num += input[i];
		}
	}

	
	cout << 12 * stoi(c_num) + 1 * stoi(h_num) << endl;

	
}