#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> que;

	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		que.push(i + 1);
	}


	while (que.size() != 1) {
		for (int i = 0; i < k-1; i++) {
			int temp = que.front();
			que.pop();
			que.push(temp);
		}

		que.pop();
	}

	cout << que.front() << endl;
}