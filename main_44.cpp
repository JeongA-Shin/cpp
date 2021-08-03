#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//문제를 완전 제대로 이해하고 코드를 짜자...디버깅 겁나 오래 걸림...
//결국 인덱스들이 거리가 되는데, 이 정보(인덱스 간의 차==거리)를 활용하기 위해 따로 저장해줘야 함(여기서는 벡터로)


int location[2500000]; //위치이면서 동시에 거리의 후보,0으로 초기화됨
vector<int> index_for_distance;


int count(int magugan_num,int middle,int end) {
	int cnt = 1; //일단 첫 마구간에는 반드시 말이 있도록
	int index = 1;

	int length = index_for_distance.size();
	int len = index_for_distance[length - 1];

	for (int i = 1; i < len+1; i++) {
		if (location[i] == 1) { //현재의 마굿간을 찾아서
			if (i - index >= middle) { //현재 마굿간과 그 전의 마굿간 사이 거리가 지금 middle보다 크거나 같으면 이 middle로의 cnt++;
				cnt++;
				index = i;
			}
		}
	}



	return cnt; //cnt는 이 middle 기준으로 총 들어갈 수 있는 (가능한) 말의 수

}

int main() {
	int magugan_num;
	int horse_num;


	cin >> magugan_num >> horse_num; //5 3
	

	for (int i = 0; i < magugan_num; i++) { //횟수
		int locate;
		cin >> locate;
		index_for_distance.push_back(locate);
		location[locate] = 1; //마구간이 있는 위치는 1로 표시//1부터 시작됨
	}

	//현재 후보(최대인 말들의 거리 중 최소),즉 말들을 최대한 멀리 놓았을 때의 최솟값(얘보다는 커야 한다) 는 1~9사이임
	//즉 거리가 1~9 사이 중 한 값이 되어야 함. 즉 위치가 아니라! ""거리""!!!!!!!!!!!(양)을 front와 end로 잡음(.location[0]이 front가 아니라 1이 front)
	// (그리고 그 값은 middle로 잡아내야함)
	//따라서 그 범위를 front, end로 잡아야 하므로


	sort(index_for_distance.begin(), index_for_distance.end());

	int front=index_for_distance[0];

	int length = index_for_distance.size();

	int end = index_for_distance[length-1];


	int res=0;

	while (front <= end) {
		int middle = (front + end) / 2;

		if (count(magugan_num,middle,end)<horse_num){//거리가 너무 크면(그래서 가능한 말의 마리수가 적으면)
			end = middle - 1;
		}else if (count(magugan_num, middle,end) >= horse_num) {//위치 범위 넘어가면
			res = middle;
			front = middle + 1;
		}
	}

	

	cout <<res << endl;



}