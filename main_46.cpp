#include <iostream>
#include<queue>
using namespace std;

/* 내 코드는 time limit 걸림
int main() {

	int n;
	cin >> n;
	queue<pair<int,int>> que;

	int sum = 0;
	for (int i = 1; i < n+1; i++) {
		int finish;
		cin >> finish;
		sum += finish;
		que.push(pair<int,int>(i,finish));

	}



	int blackout;
	cin >> blackout; //이만큼 후에 정전이 발생

	if (sum <=blackout) {
		cout << -1 << endl;
		return 0;
	}

	//0~1초엔 1번째 칸만 -1
	//1~2초엔 1번째, 2번째 칸에 -1
	//2~3초엔 1,2,3칸에


	for (int i = 1; i < blackout+1; i++) {//즉 i는 현재 흐른 초
		//RR로 돌아가면서 각 칸에 -1씩

		int info = que.front().second;
		int index = que.front().first;

		if (info - 1 == 0) {
			que.pop();//끝났으면 아예 빼버림
			if (que.size() == 0) {
				break;
			}
		}
		else {
			que.pop();
			que.push(pair<int, int>(index, info - 1));
		}


	}

	if (que.size() == 0) {
		cout << -1 << endl;
	}
	else {
		cout << que.front().first << endl;
	}




}
*/


int arr[21000];

int main() {

	int n, k;

	cin >> n;

	int total = 0;

	for (int i = 1; i < n+1; i++) {
		int time;
		cin >> time;
		total += time;
		arr[i] = time;
	}

	cin >> k;


	if (total < k) {
		cout << -1 << endl;
		return 0;
	}

	int index = 1; //현재 내가 확인하는 인덱스
	int now = 0; // 초

	while (1) { //0이면 그냥 넘어감(index만 증가함-다음 차례로 넘어만 감)

		/* 그냥 이렇게 해버리면 0인 경우에(그 일이 없어진 경우) index만 커지고 해당 업무는 하지 않게 됨(즉 완전 배제가 안 됨)
		if (arr[index] != 0) {
			arr[index]--;
			now++;
		}

		if (index == n ) {
			index = 1;
		}
		else {
			index++;
		}



		즉 , 현재 칸의 값이 0이면 index++ 한 후에도  
		if (arr[index] != 0) {
			arr[index]--;
			now++;
		}를 해줘야 하게 됨


		*/

		if (arr[index] == 0) {
			index++; //0이면 index만 바꿔주고 패스(다음 볼 거만 정해주고)
			if (index > n) {
				index = 1;
			}
			continue; //0이면 continue를 통해 그냥 아예 패스 -->이렇게 해줘야 안 헷갈림
		}

		arr[index]--;
		index++;
		if (index > n) {
			index = 1;
		}
		

		now++; //!!!!! 할 거 다 하고 초 증가
		
		if (now == k) {
			break;
		}
		
	}

	bool flag = true;
	for (int i = 1; i < n+1; i++) {
		if (arr[i] !=0) {
			flag = false;
			index = i;
			break;
		}
	}


	if (flag == false) {
		cout << index << endl;
	}
	else {
		cout << -1 << endl;
	}

}