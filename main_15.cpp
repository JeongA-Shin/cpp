#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	
	int* cnt = new int[N+1] {0}; //초기화
	//cout << "동적배열 선언" << endl;
    //1은 소수가 아니므로 i=2부터 시작


	for (int i = 1; i < N+1; i++) {//i가 약수 후보임
		for (int j = i; j < N+1; j=j+i) { //j는 i의 배수가 되는 거임(표로 이해하면 쉬움, 9번과 같음)
			cnt[j]++;
		}
	}

	int res = 0;
	//1은 소수가 아니므로 제외
	for (int i = 2; i < N+1; i++) {
		if (cnt[i] == 2) { //1을 제외하고 자기 자신만 약수로 가지므로
			res++;
		}
	}

	cout << res << endl;
	delete[] cnt;
}