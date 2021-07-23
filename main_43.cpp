#include <iostream>
using namespace std;


// 결정 알고리즘(이진 탐색의 활용)을 활용해야함
// 어떤 범위 사이의 특정 값을 이진 탐색을 통해 찾아내는 것
// middle값이 답이 되는가?

int* arr;

int count(int arrsize, int unit) { //해당 unit을 길이로 했을 때, 총 몇 개의 cd가 필요한지
	int sum=0;
	int cnt = 0;
	int index = 0;
	for (int i = index; i < arrsize; i++) {
		sum += arr[i];
		index++;
		if (sum > unit) {
			sum = 0;
			cnt++;
			index--;
		}
	}
	

	return cnt; 
}
int main() {
	int n;
	cin >> n;

	int m;
	cin >> m;

	arr = new int[n];

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		sum += num;
		arr[i] = num;
	}

	int front = 1;
	int rear = sum;

	int res = 0;

	while (front < rear) {
		int middle = (front + rear) / 2;
		

		if (count(n, middle) <= 3) { 
			res = middle;
			rear = middle - 1;
		}else {
			front = middle + 1;
		}

	}

	cout << res << endl;

	delete[] arr;

}

/*
*  내가 푼 방법 -- 오답임 ㅠ
* 
//이진탐색(이분검색)의 응용
int main() {
	int n;
	cin >> n;

	int m;
	cin >> m;

	int* arr = new int[n];

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		sum += num;
		arr[i] = num;
	}

	//최대한 전체 "양"적인 측면에서(전체sum에서) 균등하게 나누어야 한 단위?당 최소의 크기가 나옴

	int unit = sum / m;


	
	int nsum = 0;
	int index = 0;

	int final_index = 0;

	while (index<n) {
		nsum += arr[index];
		if (nsum > unit) {
			nsum = 0;
			final_index = index - 1;
			continue;
		}
		
		index++;

	}


	int result = 0;
	for (int i = final_index; i < n; i++) {
		result += arr[i];
	}
	cout << result << endl;

	delete[] arr;


}

*/