#include <iostream>
using namespace std;

//이진트리 깊이 우선 탐색

void dfs_1(int v) {
	if (v > 7) return; //종료시점
	cout << v<<" ";
	dfs_1(v * 2);
	dfs_1(v * 2 + 1);
}

void dfs_2(int v) {
	if (v > 7) return; //종료시점
	dfs_2(v * 2);
	cout << v << " ";
	dfs_2(v * 2 + 1);
}

void dfs_3(int v) {
	if (v > 7) return; //종료시점
	dfs_3(v * 2);
	dfs_3(v * 2 + 1);
	cout << v << " ";
}

int main() {


	
	dfs_1(1); 
	cout << endl;
	dfs_2(1);
	cout << endl;
	dfs_3(1);
}