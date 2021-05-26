#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N; //ÇÐ»ý¼ö

	int card;
	int answer;

	for (int i = 0; i < N; i++) {
		int sum = 0;
		cin >> card >> answer;
		for (int j = 1; j <= card; j++) {
			sum += j;
		}

		if (sum == answer) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		
	}


}