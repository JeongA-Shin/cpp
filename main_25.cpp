#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int N;
	cin >> N;


	int* score = new int[N];
	int** rank = new int* [N];

	for (int i = 0; i < N; i++) {
		rank[i] = new int[2];    //rank[*][0]은 점수정렬, rank[*][1]은 순위정렬된 것
	}

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		score[i] = num;
		rank[i][0] = num;
	}



	
	//rank[*][0] 점수 정렬하기
	for (int i = 0; i < N-1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (rank[j][0] > rank[i][0]) {
				int temp;
				temp = rank[j][0];
				rank[j][0] = rank[i][0];
				rank[i][0] = temp;
			}
		}
	}

	//점수 배열 제대로 됐음


	
	for (int i = 0; i < N; i++) {
		int temp=i;
		for (int j = i + 1; j < N; j++) {
			if (rank[i][0] == rank[j][0]) {
				temp = j; //같은 점수가 있는 지점
				rank[j][1] = i + 1;
			}
		}
		rank[i][1] = i + 1;
		i = temp; // 같은 점수가 끝나는 지점 다음부터 다시 i돌림
	}


	//순위 배열도 제대로 됐음


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (score[i] == rank[j][0]) {
				cout << rank[j][1] << " ";
				break;
			}
			
		}
	}

	
	

	for (int i = 0; i < N; i++) {
		delete[] rank[i];
	}

	delete[] rank;
	delete[] score;

	


}	
