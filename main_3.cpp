#include <iostream>
using namespace std;

int main() {


	int n;
	cin >> n;


	cout << "1";

	int sum = 1; //1은 무조건 진약수이므로


	for (int i = 2; i < n+1; i++) {
		if (n % i == 0) {
			if (i < n) {
				cout <<"+"<< i;
				sum += i;

			}
			else {
				cout << "=";
				break;
			}
		}

	}

	cout << sum;
}