#include <iostream>
using namespace std;



int main() {


	//왜 하나가 wrong이 뜰까?
	
	int N;
	cin >> N;

	int* arr = new int[N];


	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}
	
	int max_length = 0; // 증가되는 길이 중 최대 길이
	int length = 0; // 길이(증가되는 길이)
	int max_start = 0; // 최대 길이가 시작되는 index

	for (int i = 0; i < N-1; i++) {
		if (arr[i] <= arr[i + 1]) {
			length++;
		}
		else {
			length++;//왜냐하면 12 12 13 10 이렇게면 증가의 마지막 칸(13)도 길이에 포함되는데 이거는 if에서 처리를 못함.
			//최대길이가 갱신되면
			if (max_length < length) {
				max_length = length;
				max_start = i - length + 1;
			}
			//최대 길이 아니더라도 다시 처음부터 길이 재야함
			length = 0; //다시 초기화
		}
	}


	if (max_length == 1) { // 연속되는 부분이 없으면
		cout << 0 << endl;
	}
	else {
		cout << max_length << endl;
	}



	delete[] arr;

	
	
}