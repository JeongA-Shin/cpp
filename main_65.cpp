#include <iostream>
using namespace std;


//즉 64번에서는 정석 dfs로 내려가는 방향?으로만(자식으로만) 계속 연결을 시켜주어야 했고
//이번 문제에서는 상,하,좌,우로 모두 검색해서 해당되기만 하면 바로 연결함
int arr[8][8];
int cnt = 0;
int check[8][8];
//!!! 사람 눈으로 보면 이게 한 방향으로 가는지, 즉 지금 이게 dfs의 방향대로 가는지, 갔던 노드를 다시 세진 않는지가 눈에 보이는데
// 코드로 하면 이걸 따로 설정해줘야 한다. 그래서 dfs로 검사하는 중에 그 큰 줄기에서 이미 거쳤던 게 있는지 확인해주는 배열이 필요하다
//(즉 자식으로 갔다가 다시 부모로 오지 않도록) 


//(특히 격자판 활용에서) 상하좌우로 검사해야하면 이렇게 해야 편함
// 일일히 if문으로 상/하/좌/우 나누지 않아도 됨
//상: dx[0]dy[0]...이런 식으로
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int row,int col) {
	if (row == 7 && col == 7) cnt++;
	else {
		check[row][col] = 1; //자기 자신은 무조건 방문하므로
		for (int i = 0; i < 4; i++) {
			//상하좌우로 모두 확인하는 방법- 진행할지 안 할지. 
			int xx, yy;
			xx = row + dx[i];
			yy = col + dy[i];
			if (xx < 1 || xx>7 || yy < 1 || yy>7) continue; //검사할 곳이 격자판 범위를 넘으면 안 되니까,continue는 코드 끝으로 바로 감
			if (arr[xx][yy] == 0 && check[xx][yy] == 0) {
				check[xx][yy] = 1;
				dfs(xx, yy);
				check[xx][yy] = 0; //dfs의 재귀가 끝나고 stack별로 돌아오는 라인

			}
			
		}
	}
}

int main() {

	for (int i = 1; i < 8; i++) {
		for (int j = 1; j < 8; j++) {
			int temp;
			cin >> temp;
			arr[i][j] = temp;
		}
	}

	dfs(1,1);

	cout << cnt << endl;

}