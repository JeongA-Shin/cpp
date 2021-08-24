#include <iostream>
using namespace std;

int map[30][30];

int main() {

	int node, edge;
	cin >> node >> edge;

	for (int i = 1; i < edge+1; i++) {
		int start_node;
		int destination_node;
		int distance;

		cin >> start_node >> destination_node >> distance;

		map[start_node][destination_node] = distance;
	}


	for (int i = 1; i < node + 1; i++) {
		for (int j = 1; j < node + 1; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}