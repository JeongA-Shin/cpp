#include <iostream>
using namespace std;


int arr[60][60]; //모두 0으로 초기화

int main() {

	int N;
	cin >> N;

	for (int i = 1; i < N+1; i++) {
		for (int j = 1; j < N+1; j++) {
			int num;
			cin >> num;
			arr[i][j] = num;
		}
	}


	int cnt = 0;
	
	for (int i = 1; i < N+1; i++) {
		for (int j = 1; j < N+1; j++) {
			int temp = arr[i][j];
			if (temp > arr[i][j-1]) {
				if (temp > arr[i][j + 1] && temp > arr[i + 1][j] && temp > arr[i - 1][j]) cnt++;
			}
		}
	}


	cout << cnt << endl;
}


/*
예시코드- 다른 방법, 방향 배열을 만들어놓고 확인해보기!
->계속 arr[i-1][j],arr[i + 1][j],arr[i][j-1],arr[i][j + 1]의 반복
->즉 i,j에 대해서 -1,0,1,0의 반복


int map[51][51];'
//방향배열
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};


int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, j, k, flag, cnt=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &map[i][j]);
		}
	}


	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			flag=0;
			for(k=0; k<4; k++){
				if(map[i+dx[k]][j+dy[k]]>=map[i][j]){
					flag=1;
					break;
				}
			}
			if(flag==0) cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}



*/