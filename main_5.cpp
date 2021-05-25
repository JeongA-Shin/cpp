#include <iostream>
#include <string>
using namespace std;


int main() {


	
	string input;

	cin >> input;

	int length = input.length();


	//나이 구하기
	int age;
	int yearofbirth;
	if (int(input[7]-48) == 1 || int(input[7]-48) == 2) {
		yearofbirth = 1900 + 10 * int(input[0] - 48) + int(input[1]-48);
		age = 2019 - yearofbirth + 1;
	}
	else {
		yearofbirth = 2000 + 10 * int(input[0] - 48) + int(input[1]-48);
		age = 2019 - yearofbirth + 1;

	}




	string gender;

	if (int(input[7]-48) == 1 || int(input[7]-48) == 3) {
		gender = "M";
	}
	else {
		gender = "W";
	}


	cout << age << " " << gender << endl;

}