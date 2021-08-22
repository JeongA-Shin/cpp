#include <iostream>
using namespace std;
int a[1501]; //ugly number들의 배열 즉 a[n]은 n번째 ugly number

//모든 숫자들을 일일히 ugly number인지 판단할 필요 없음
//그냥 ugly number에다가 2,3,5만 곱하면서 비교하면 됨!
int main() {
	int n, p2, p3, p5, min = 0;
	cin >> n;

	a[1] = 1; //첫 번째 ugly number는 1
	p2 = p3 = p5 = 1; //일단 모든 포인터들이 인덱스 1을 가르킴

	for (int i = 2; i <n+1; i++) {
		//2를 곱한 것과 3을 곱한 것 중 더 작은 값을 찾음
		if (a[p2] * 2 < a[p3] * 3) min = a[p2] * 2;
		else min = a[p3] * 3;
		//그리고 5를 곱한 게 더 작은면 min에 5를 곱한 것을 넣음
		if (a[p5] * 5 < min) min = a[p5] * 5;
		
		//우선 각 포인터들을 옮김
		if (min == a[p2] * 2) p2++;
		if (min == a[p3] * 3) p3++;
		if (min == a[p5] * 5) p5++;

		//그리고 해당 칸에는 min을 넣어줌
		a[i] = min;
	}
	cout << a[n] << endl;
}