#include <iostream>
#include <vector>
using namespace std;


int main() {
	int N;
	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}


	for (int i = 0; i < vec.size() - 1; i++) { //전체 몇 번 회전하는지 - 회전의 시작이 달라짐
		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[i] > vec[j]) {
				int temp;
				temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}

		
	}
	
	
	vector<int>::iterator iter;

	for (iter = vec.begin(); iter != vec.end() ; iter++) { 
		cout << *iter << " ";
	}
	

	

}