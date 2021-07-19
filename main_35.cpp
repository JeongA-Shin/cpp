#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;


	vector<int> plus;
	vector<int> minus;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num > 0) {
			plus.push_back(num);
		}
		else {
			minus.push_back(num);
		}
	}


	minus.insert(minus.end(), plus.begin(), plus.end());

	vector<int>::iterator itr;

	for (itr = minus.begin(); itr != minus.end(); itr++) {
		cout << *itr << " ";
	}
}

/*

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;


	vector<int> plus;
	vector<int> minus;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num > 0) {
			plus.push_back(num);
		}
		else {
			minus.push_back(num);
		}
	}


	minus.insert(minus.end(), plus.begin(), plus.end());

	vector<int>::iterator itr;

	for (itr = minus.begin(); itr != minus.end(); itr++) {
		cout << *itr << " ";
	}
}

*/