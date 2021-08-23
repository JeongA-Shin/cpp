#include <iostream>
using namespace std;


int arr[15];
int n;

void dfs(int L) {
	if (L > n) {
		for (int i = 1; i < n+1; i++) {
			if (arr[i] == 1) cout << i << " ";
		}

		cout << endl;

		return;
	}
	
	arr[L] = 1; //왼쪽자식부터 봄. 왼쪽 자식이면 해당 숫자를 포함한다는 것
	dfs(L + 1); //다음 레벨로 옮김

	arr[L] = 0; //그리고 오른쪽 자식으로. 오른쪽 자식이면 해당 숫자를 포함하지 않는다는 것
	dfs(L + 1);

}


int main() {
	cin >> n;

	dfs(1); //level 1부터 탐색
}