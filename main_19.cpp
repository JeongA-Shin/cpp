#include <iostream>
using namespace std;

int main() {
	//채점 폴더에서 왜 마지막 경우에 wrong answer이 뜨는지 모르겠음
	int N;
	cin >> N;


	int* arr = new int[N];


	int height;
	for (int i = 0; i < N; i++) {
		cin >> height;
		arr[i] = height;
	}

	//cnt는 분노 유발자의 수
	int cnt = N;
	for (int j = 0; j < N; j++) { // j 는 기준되는 학생
		for (int k = j+1; k < N; k++) { //j 뒷자리와 비교

			if(arr[j]< arr[k]){ // k가 더 큰 게 한 번이라도 있으면 j는 분노 유발자가 될 수 없음
				cnt--;
				break;
			
			}
		}
	}

	//이렇게 되면 제일 마지막 칸은 따로 처리해야한다.
	// 마지막 칸은 비교될 뒷 칸들이 없으므로
	cnt--;


	cout << cnt << endl;

	delete[] arr;
}