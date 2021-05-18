#include <iostream>
#include <fstream>
using namespace std;


int main() {

	int N;
	cin >> N;

	ofstream fout("input.txt");


	int input;

	for (int i = 0; i < N; i++) {
		cin >> input;
		fout << input<<endl;
	}
	fout.close();




	ifstream fin("input.txt");

	int min= 1000;
	int max = 0;

	int num;

	while (!fin.eof()) {
		fin >> num;
		if (num < min) {
			min = num;
		}

		if (num > max) {
			max = num;
		}
	}


	int res = max - min;

	cout << res;





}