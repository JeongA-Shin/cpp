#include <iostream>
using namespace std;



int reverse(int x) {
	int res = 0;

	while (x > 0) {
		int num = x;
		res *= 10;
		res += num % 10;
		x = x / 10;
	}

	return res;
}


bool isPrime(int x) {

	//소수를 판단할 때 1은 반드시 따로 빼서 판단!!!
	if (x == 1) {
		return false;
	}

	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false; // false면 소수가 아님
		}
	}

	return true; //true면 소수임

}

int main() {

	int N;
	cin >> N;
	
	

	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		int temp=reverse(input);
		if (isPrime(temp)) {
			cout << temp << " ";
		}
	}

	cout << endl;
}