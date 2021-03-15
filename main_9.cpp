#include <iostream>
using namespace std;

int main() {
	

	/*
	int input;

	cin >> input;


	for (int i = 1; i < input+1; i++) {

		int count = 0;

		for (int j = 1; j < i+1; j++) {
			if (i % j == 0) {
				count++;
			}
		}

		cout << count << " ";
	}



	이렇게 해도 결과는 나오긴 하지만 시간이 초과된다.
	(O(n^2))
	(input이 3000이상이면)

	*/



	//그래서 아래의 코드처럼 하면 시간이 초과되지 않는다.

	int cnt[10];//cnt값들이 저장됨

	for (int k = 0; k < 10; k++) {
		cnt[k] = 0;
	}

	int input;

	cin >> input;

	 
	for (int i = 1; i < input + 1; i++) {
		//j는 i의 배수를 따라가므로 시작도 i부터 시작한다.
		for (int j = i; j < input + 1; j=j+i) { //j+i를 함으로써 1의 배수(i=1일때이므로 한 칸씩)
			// i가 2면 2의 배수를 찾아서(2칸씩)...이렇게 들어가는 거임
			cnt[j]++ ;
		}
	}


	for (int i = 1; i < input+1; i++) {
		cout << cnt[i] << " ";
	}
	

}