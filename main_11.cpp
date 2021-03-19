#include <iostream>
using namespace std;

int main() {


	int num;

	cin >> num;

	int count=0;

	/*   내가 생각한 개념은 맞는데!!!
	for문에서 횟수로 돌리는 i와 내가 한 while문의 i가 충돌되는 것을 생각 못 함
	+ 1부터 세야하므로!! i는 1부터 써야함
	횟수로서의 i와 실제적 값이랑 헷갈렸음

	for (int i = 0; i < num; i++) {

		while (i > 0) {
			i = i / 10; //자릿수 하나씩 옮겨가는 것
			count++;
		}

	}
	*/




	for (int i = 1; i < num+1; i++) {
		int temp = i;

		while (temp > 0) {
			temp = temp / 10;
			count++;
		}
	}

	cout << count << endl;


}