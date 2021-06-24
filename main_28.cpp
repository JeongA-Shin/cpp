#include <iostream>
#include <string>
using namespace std;


bool compare(int a, int b) {
	if (a >= b) return true;
	else return false;
}

int main() {

	int N;
	cin >> N;

	/*
	int fac = 1;
	for (int i = 1; i < N + 1; i++) {
		fac *= i;
	}
	*/
	//이렇게 되버리면 N이 너무 크면 fac가 int 범위를 벗어나게 됨-> 근데 곱 연산은 해줘야 하므로 이 단계에서는 string을 못 함
	// 10이 되기 위한 조건으로 생각하자->2와 5가 쌍으로 있는 개수가 10의 (0의) 개수임!



	int num2 = 0;
	int num5 = 0;

	//2의 개수, 5의 개수 구하기
	for (int i = 1; i < N + 1; i++) {
		int temp = i;
		int temp2 = i;
		if (temp % 2 == 0) {
			while (temp % 2 == 0) {
				temp /= 2;
				num2++;
			}
		}


		if (temp2 % 5 == 0) {
			while (temp2 % 5 == 0) {
				temp2 /= 5;
				num5++;
			}
		}


	}


	if (compare(num2, num5)) {
		cout << num5 << endl;
	}
	else {
		cout << num2 << endl;
	}

}