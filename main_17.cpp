#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N; //학생수

	int card;
	int answer;


	// 이렇게 for문 여러번 쓰면 time limit 걸릴 확률 높음
	// 따라서 점화식을 세울 수 있으면 점화식으로 풀기
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