#include <iostream>
#include <string>
using namespace std;


int main() {


	
	//cout << 'A' + 32 << endl; 
	// printed as '97'! not 'a'

	//cout << int('A') << endl; //65
	
	
	
	
	
	string input;
	
	getline(cin,input);

	int length = input.length();

	for (int i = 0; i < length; i++) {

		if( input[i] == ' ') {
			//do nothing
		}
		else if ( int(input[i]) > 64 && int(input[i]) < 91) {
			cout << char(input[i] + 32);
		}
		else {
			cout << (input[i]);
		}

	}


	cout << endl;
	
	
	

}