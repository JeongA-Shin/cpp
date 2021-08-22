#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;

	string input;
	cin >> input;

	int length = input.length();

	for (int i = 0; i < length; i++) {
		if (s.size() == 0 && input[i] == ')') {
			cout << "NO" << endl;
			return 0;
		}

		if (input[i] == '(') {
			s.push(1);
		}
		else {
			s.pop();
		}
	}


	if (s.size() != 0) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
	
}