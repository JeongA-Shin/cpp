#include <iostream>
using namespace std;


//단순수리
//경우의 수 -분할과 분배하듯이 생각

int main() {


	int n;
	cin >> n;

	int ori = n;
	int b = 1;

	n--;//일단 1을 빼줌

	int cnt = 0;

	while (n > 0) {
		b++; //항의 개수
		n -= b; //각 항을 만들어 놓은 것,n은 각 항의 기본(1,2,3...)을 제외하고 남은 수의 양

		if (n % b == 0) { 
			int temp = n / b;
			for (int i = 1; i < b+1; i++) { //i는 위에서 말한 항의 기본인 1,2,3,....
				if (i == b) {
					cout << i + temp;
				}
				else {
					cout << i + temp << "+";

				}
			}

			cout << "="<<ori << endl;
			cnt++;
		}

		
		
	}
	
	cout << cnt << endl;


}