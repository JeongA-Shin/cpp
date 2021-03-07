#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

int main() {

	ifstream fin;

	fin.open("input.txt");

	int min=101;
	int max=1;
	int num;

	int count;

	fin >> count;

	for (int i = 0; i < count; i++) {
		fin >> num;
		if (num < min) {
			min = num;
		}
		if (num > max) {
			max = num;
		}
		
	}


	int res = max - min;

	ofstream fout;
	fout.open("output.txt");

	fout << res << endl;


	
}