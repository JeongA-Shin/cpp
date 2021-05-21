#include <iostream>
using namespace std;

int cnt[50001];


int main() {


	int n, i, j;

	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = i; j <= n; j = j + i) {  // 이중배열처럼 생각
			//i는 약수 개개인이라고 생각. 약수 후보인 i가 해당되는 숫자(즉 인덱스-j)에 일일히 손 드는 것
			cnt[j]++;
		} 
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", cnt[i]);
	}



	/*  이렇게 하면 time limit이 걸림
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

	*/

}