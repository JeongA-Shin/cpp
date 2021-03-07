#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

int main() {

	//*** 형변환시 주의 사항***
	//문자를 그대로 int 형으로 바로 형변환해버리면 그냥 아스키코드에 해당되는 값으로만 계산됨
	//내가 원하는 숫자로 하려면 반드시 (int) 이렇게 붙인 거에다가 -48까지 해줘야함

	string number;

	cin >> number;



	int year;

	if (((int)number[0]-48) == 0) {
		year = 2000 + ((int)number[0]-48) * 10 +((int)number[1]-48);
	}
	else {
		year=1900+((int)number[0]-48) * 10 + ((int)number[1]-48);
	}

	int age = (2019 - year) + 1;



	int gender1 = ((int)number[7]-48);
	string gender2;
	if (gender1 == 1 || gender1 == 3) {
		gender2 = "M";
	}
	else {
		gender2 = "W";
	}

	cout << age<<" "<< gender2 << endl;
	
	
}