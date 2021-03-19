#include <iostream>
using namespace std;

int main() {


	int compare[10];

	for (int i = 0; i < 10; i++) {
		compare[i] = 0; // 개수 초기화
	}


	int input;

	cin >> input;

	
	
	while (input > 0) {
		int temp;
		temp = input % 10; //끝에서부터 본다.
		compare[temp]++;
		input = input / 10; //소수점 왼쪽으로 옮김
		
	}

	int max = 0;

	int res = 0;

	for (int i = 0; i < 10; i++) {
		if (compare[i] > max) {
			max = compare[i];
			res = i;
		}
		else if (compare[i] == max) {
			max = compare[i];
			res = i;
		}
		
	}

	cout << res << endl;


}