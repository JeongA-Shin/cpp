#include <iostream>
#include <vector>
using namespace std;


int main() {
	int N;
	cin >> N;

	vector<int> inverse(N + 1), ori(N + 1);
	

	for (int i = 1; i < N+1; i++) {
		int input;
		cin >> input;
		inverse[i] = input;
	}

	for (int i = N; i>0 ; i--) {
		int pos = i;// 당겨지는 시작위치
		for (int j = 1; j <= inverse[i]; j++) {
			ori[pos] = ori[pos + 1];
			pos++;
		}

		ori[pos] = i;
	}

	
	for (int i = 1; i < N + 1; i++) {
		cout << ori[i] << " ";
	}

	
}


/*내가 푼 것 -> time limit 걸림
int main() {
	int N;
	cin >> N;

	int* arr = new int[N] {0};

	
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		int blank = 0;
		int num = 0;
		//빈 칸의 수들이 input에 해당됨
		for (int j = 0; j < N; j++) {

			if (blank == input) break;

			if (arr[j] == 0) blank++;
			else num++;
		}
	

		for (int s = (blank) + num; s < N; s++) {
			if (arr[s] == 0) {
				arr[s] = i + 1;
				break;
			}
		}

		
	}

	
	for (int k = 0; k < N; k++) {
		cout << arr[k] << " ";
	}

	for (int i = 0; i < N; i++) {
		delete[] arr;
	}
}
*/