#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int N;
	cin >> N;

	int lt; //curr기준 왼쪽의 수들 -> 이걸 통해서 N이전의 해당 자릿수에는 3이 몇 번 나왔는지 알 수 있음
	int rt; // curr기준 오른쪽의 수들 -> 이걸 통해서 N 이후의 해당 자릿수에는 3이 몇 번 나왔는지 알 수 있음
	int curr; //현재 내가 확인하는 자릿수의 숫자(1536에서 10의 자리를 확인한다면 현재 curr은 10의 자리인 3임)
	int k=1; //현재 내가 확인하는 자릿수의 의미(1인지 10인지 100인지....) // 1의 자릿수부터 확인하므로 1로 초기화함


	//1부터 N까지의 수들을 자릿수를 맞추어 나열해서 해당 자릿수씩만 끊어서 봄
	// 0001
	// 0002
	// ...
	// 0203   이런 식으로 나열한 후



	int cnt = 0;// 최종결과 -->3의 총 개수

	int temp = N;


	string tmp = to_string(N);
	int length = tmp.length();
	int len = 1;


	while (len<=length) {
		lt = temp / (k * 10);
		rt = temp % k;
		curr = (N - lt*(k*10) - rt)/k;
		/* 중간확인 과정
		cout << "lt: " << lt << endl;
		cout << "rt: " << rt << endl;
		cout << "curr: "<<curr << endl;
		cout << endl;
		*/

		if (curr > 3) cnt += (lt + 1) * k;
		else if (curr < 3) cnt += (lt * k);
		else  cnt+=(lt * k) + (rt + 1);

		k *= 10;
		len++;
	}

	cout << cnt << endl;
	



}