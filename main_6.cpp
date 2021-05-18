#include <iostream>
#include <string>
using namespace std;


int main() {


	string input;

	cin >> input;

	int length = input.length();

	int sum = 0;

	for (int i = 0; i < length; i++) {
		if (0 <= int(input[i]-48) && 9 >= int(input[i] - 48)) { // if it is number

			sum *= 10; // because the initialization value of the "sum" is zero, 
			//initially multiplied by 10, it is still zero.

			sum += int(input[i]-48);

		}
	}

	cout << sum << endl;


	int count = 0;
	for (int i = 1; i < sum+1; i++) {
		if (sum % i == 0) { // *** Error occurs when i == 0. So must start from 1.
			count++;
		}
	}

	cout << count << endl;


}