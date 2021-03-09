#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

int main() {

	//*** 형변환시 주의 사항***
	//문자를 그대로 int 형으로 바로 형변환해버리면 그냥 아스키코드에 해당되는 값으로만 계산됨
	//내가 원하는 숫자로 하려면 반드시 (int) 이렇게 붙인 거에다가 -48까지 해줘야함

	
	string input;
	int res = 0;//최종 숫자
	int count=0; // 약수의 개수


	cin >> input;

	int length = input.length();

	for (int i = 0; i < length; i++) {

		if (input[i] > 47 && input[i] < 58) {

			res = res * 10 + (input[i] - 48); // 누적된 거에 *10을 해주는 거임!!
		
		}
	}



	for (int i = 1; i < res+1; i++) {

		if (res % i == 0) {
			count++;
		}
	}

	cout << res << endl<<count;



}