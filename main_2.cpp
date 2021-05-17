#include <iostream>
using namespace std;

int main() {


	int A, B;

	cin >> A;
	cin >> B;

	int sum = 0;


	for (int i = A; i < B + 1; i++) {

		if (i != B) {
			cout << i << "+";
		}
		else{
			cout << i << "=";
		}
		sum += i;

	}

	cout << sum << endl;
}