#include <iostream>
#include <cmath>
using namespace std;


int main() {

	//time_limit 걸림

	int N;
	cin >> N;

	int num;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	int* jolly = new int[N](); //0으로 초기화
	

	for (int i = 0; i < N - 1; i++) {
		int temp = abs(arr[i] - arr[i + 1]);
		jolly[temp]++;
	}

	bool flag = true;
	for (int i = 1; i < N; i++) {
		if (jolly[i] == 0) {
			flag = false;
			cout << "NO" << endl;
			break;
		}
	}

	if (flag == true) {
		cout << "YES" << endl;
	}

	delete[] arr;
	delete[] jolly;
}