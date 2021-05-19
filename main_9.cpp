#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	// 1에서 N까지의 약수의 개수들을 저장하는 배열
	// an array that stores the number of divisors from 1 to N
	int* cnt = new int[N+1];

	 //0으로 초기화
	//Initialize to 0
	for (int i = 1; i < N+1; i++) {
		cnt[i] = 0;
	}
	

	// 1에서 N까지 돌면서(i) i에 해당되는 약수의 개수(j) 찾아서 배열에 넣기
	// Find the number of divisors (j) corresponding to i and put them in the array, turning from 1 to N
	for (int i = 1; i < N+1; i++) {

		for (int j = 1; j < i+1; j++) {
			if (i % j == 0) {
				cnt[i] += 1;
			}
		}

	}


	for (int i = 1; i < N + 1; i++) {
		cout << cnt[i]<<" ";
	}

	cout << endl;

	delete[] cnt;

}