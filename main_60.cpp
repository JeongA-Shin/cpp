#include <iostream>
using namespace std;


//부분집합 == 경우의 수 == dfs
int arr[15];
int n;
int sum;
bool exist = false;

void dfs(int L,int now_sum) { // 재귀함수 간의 연동?이 필요한 변수는 파라미터로 처리하기. 그래야 회귀하고 진행하는 것에 맞추어 계산 가능
	if (now_sum > (sum / 2)) return;
	if (exist == true) return;
	if (L > n) {
		if (now_sum == sum / 2) exist = true;
	}

	dfs(L + 1, now_sum + arr[L]);
	dfs(L + 1, now_sum);

}


int main() {
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		int temp;
		cin >> temp;
		sum += temp;
		arr[i] = temp;
	}

	if (sum % 2 != 0) {
		cout << "NO" << endl;
		return 0;
	}
	else {
		dfs(1,0); //level 1부터 탐색
	}

	if (exist) cout << "YES" << endl;
	else cout << "NO" << endl;

}