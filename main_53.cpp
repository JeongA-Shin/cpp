#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	
	int num, notation;

	cin >> num >> notation;

	stack<char> quot;
	stack<char> remain;

	int number = num;

	int quotient;
	int remainder;

	while (number > 1) {
		remainder = number % notation;
		cout << "remainder:" << remainder << endl;

		if (notation == 16) {
			cout << "notation == 16 ÁøÀÔ" << endl;
			if (remainder == 10) {
				remain.push('A');
			}
			else if (remainder == 11) {
				remain.push('B');
			}
			else if (remainder == 12) {
				remain.push('C');
			}
			else if (remainder == 13) {
				remain.push('D');
			}
			else if (remainder == 14) {
				remain.push('E');
			}
			else if (remainder == 15) {
				remain.push('F');
			}
			
		}
		else {
			remain.push(remainder);
		}

		quotient = number / notation;
		number = number / notation;

	}

	
	cout << number;


	while (remain.size() > 0) {
		int temp;
		temp = remain.top();
		cout << temp;
		remain.pop();
	}
	

	
}