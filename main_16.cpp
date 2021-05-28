#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	
	
	/*
	// 그냥 아스키코드에 해당되는 배열 칸에 cnt 넣기


	string origin;
	string compare;

	cin >> origin;
	cin >> compare;

	if (origin.length() != compare.length()) {
		cout << "길이가 같지 않습니다" << endl;
		exit(0);
	}

	int length = origin.length();
	int arr[140] = { 0,};
	int sec[140] = { 0,};

	for (int i = 0; i < length; i++) {
		int temp = int(origin[i]);
		arr[temp]++;

		temp = int(compare[i]);
		sec[temp]++;
	}

	bool flag = true;
	for (int j = 0; j < 140; j++) {
		if (arr[j] != sec[j]) {
			cout << "NO" << endl;
			flag = false;
			break;
		}
	}

	if (flag == true) {
		cout << "YES" << endl;
	}
	
	*/
	
	

	//sort함수를 써서 정렬해서 풀기
	//string은 sort함수로 못 한다. char배열로 해야한다.
	//근데 time limit뜸


	// 이거 때문이었음
	/*
	char origin[100];
	char compare[100];
	*/
	//char 문자열은 마지막에 null이 들어감. 그러므로 최대범위보다 한 칸 더 많이 만들어줘야 함

	char origin[101];
	char compare[101];


	cin >> origin;
	cin >> compare;

	
	if (strlen(origin)!= strlen(compare)) {
		cout << "길이가 같지 않습니다" << endl;
		exit(0);
	}


	int length = strlen(origin);

	sort(origin, origin + length);
	sort(compare, compare + length);


	bool flag = true;
	for (int i = 0; i < length; i++) {
		if (origin[i] != compare[i]) {
			cout << "NO" << endl;
			flag = false;
			break;
		}
	}

	if (flag == true) {
		cout << "YES" << endl;
	}

	
}