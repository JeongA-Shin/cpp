#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool compare(int a, int b) {
	return a > b;
}

int main() {
	int N;

	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; i++) {
		bool flag = true;
		int score;
		cin >> score;
		for (int j = 0; j < vec.size(); j++) {
			if (score == vec[j]) {
				flag = false;
				break;
			}
		}

		if (flag == true) {
			vec.push_back(score);
		}
	}

	//sort(vec.begin(),vec.end()); //오름차순으로 정렬된다.
	sort(vec.begin(), vec.end(),compare);


	/* iterator로 벡터 전체 훑기
	vector<int>::iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++) {
		cout << *itr << " ";
	}
	*/

	cout << vec[2] << endl;
}