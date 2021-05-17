#include<iostream>
using namespace std;

int main() {

	int n,m;
	cin >>n;
	cin >> m;


	int sum = 0;

	for (int i = 1; i < n + 1; i++) {
		if (i % m == 0) {
			sum += i;
		}
	}

	cout << sum << endl;

}