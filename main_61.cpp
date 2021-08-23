#include <iostream>
using namespace std;


int arr[15];
int n, m;
int cnt = 0;

void dfs(int level, int now_sum) {

	if (level > n) {
		if (now_sum == m) cnt++;
		return;
	}

	dfs(level + 1, now_sum + arr[level]);
	dfs(level + 1, now_sum - arr[level]);
	dfs(level + 1, now_sum);


}

int main() {

	cin >> n >> m;

	for (int i = 1; i < n+1; i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	dfs(1, 0);

	cout << cnt << endl;
}