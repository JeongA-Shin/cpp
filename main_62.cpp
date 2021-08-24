#include <iostream>
using namespace std;
//https://gmlwjd9405.github.io/2018/05/08/algorithm-merge-sort.html

int arr[150]; // 원래의 배열 입력용
int temp[150]; //병합용

/*
void divide(int left,int right) {
	int mid;
	int p1, p2, p3; //투(쓰리) 포인트 알고리즘
	//p1,p2는 arr을 가르키고, p3는 arr_for_merge를 가르킴
	if (left < right) {
		mid = (left + right) / 2;
		//d(1,8)->d(1,4) d(5,8) -> d(1,2)d(3,4) d(5,6)d(7,8)-> d(1,1)...인데 left==right이므로 끝남!!(나머지도 같은 이유로 더 이상 분리되지 않음)
		divide(left, mid); //이분 검색처럼 생각 
		divide(mid + 1, right);

		//이거 문제에 내가 그린 그림 보면 이해 됨, 
		//재귀함수는 stack구조이고, 재귀가 끝나고 어느 줄로! 돌아오는지 생각하면 쉬움 - 이걸 정확히 알아야함. 아니면 꼬임

		p1 = left;
		p2 = mid + 1;
		//즉 p1,p2는 더 잘게 잘리는 경계선이었던 거임

		p3 = left;

		while (p1 <= mid && p2 <= right) {
			if (arr[p1] < arr[p2]) {
				temp[p3] = arr[p1];
				p3++;
				p1++;
			}
			else {
				temp[p3] = arr[p2];
				p3++;
				p2++;
			}
		}

		//나머지 아직 비교 덜 끝낸 것
		while (p1 <= mid) {
			temp[p3] = arr[p1];
			p3++;
			p1++;
		}

		while (p2 <= right) {
			temp[p3] = arr[p2];
			p3++;
			p2++;
		}

		//그리고 각 단계에서 비교 끝날 때마다 결과를(temp) 다시 arr로 복사해준다.
		for (int i = left; i < right + 1; i++) {
			arr[i] = temp[i];

		}

	}
}

*/


void divide(int left, int right) {
	if (left < right) { //즉 더 이상 못 쪼갤 때까지 //만약 left>=right이면 걍 종료 시점임(아무것도 안 함)
		int mid = (left + right) / 2;
		//mid 기준으로 가지침(나눔)
		divide(left, mid);
		divide(mid + 1, right);

		//그리고 더 못 쪼개고 다시 재귀하면 이 위치로 돌아옴
		int p1, p2, p3;
		p1 = left;
		p2 = mid + 1; //투 포인터 알고리즘으로 비교해서 정렬, 따라서 각 쪼개진 것의 시작(각 자식들의 시작)을 가르키도록

		p3 = left; //temp배열의 포인터


		while (p1 <= mid && p2 <= right) { //투 포인터들의 이동범위
			if (arr[p1] < arr[p2]) {
				temp[p3] = arr[p1];
				p3++;
				p1++;
			}
			else {
				temp[p3] = arr[p2];
				p3++;
				p2++;
			}
		}
		

		//각 포인터가 가르키는 것끼리 하나씩 비교하다가 한 쪽이 먼저 끝나면 다른 쪽은 남음. 남은 걸 처리
		//p1쪽이 남음
		while (p1 <= mid) {
			temp[p3] = arr[p1];
			p3++;
			p1++;
		}


		//p2쪽이 남음
		while (p2 <= right) {
			temp[p3] = arr[p2];
			p3++;
			p2++;
		}


		for (int i = left; i < right + 1; i++) { // 그리고 각 단계의 정렬 결과를 arr로 복사한다. 각 단계마다!
			arr[i] = temp[i];
		}
		
	}
}

int main() {

	int n;
	cin >> n;

	for (int i = 1; i < n+1; i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	divide(1,n);

	for (int i = 1; i < n + 1; i++) {
		cout << arr[i] << " ";
	}
}