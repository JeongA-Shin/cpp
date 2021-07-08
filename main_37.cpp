#include <iostream>
using namespace std;

int main() {

	int S; //캐시 사이즈
	int N; //작업의 개수
	

	cin >> S >> N;
	int* arr = new int[S];

	for (int i = 0; i < S; i++) {
		arr[i] = 0;
	}



	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		bool flag = false;
		for (int j = 0; j < S; j++) {
			if(arr[j] == num) { //hit이 나면
				flag = true;

				//1.먼저 j앞의(왼쪽에 있는)요소들을 뒤로 밀리게 한다
				for (int k = j; k > 0; k--) {
					arr[k] = arr[k - 1];
				}
				//2. 그리고 최신 것을 [0]의 위치에 업데이트
				arr[0] = num;
				break;
			}
		}

	    //fault가 나면
		if (flag == false) {
			for (int x = S - 1; x > 0; x--) {
				arr[x] = arr[x - 1];
			}
			arr[0] = num;
		}
		cout << endl;

		if(i==0) cout << "캐시 메모리 상태변화" << endl;
		for (int y = 0; y < S; y++) {
			cout << arr[y] << " ";
		}
		cout << endl;
	}




	cout << endl;
	cout <<"최종결과"<< endl;
	for (int i = 0; i < S; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;
}