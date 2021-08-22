#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	stack<int> s;

	int num;
	cin >> num;

	vector<int> compare;

	string res="";

	for (int i = 0; i < num; i++) {
		int temp;
		cin >> temp;

		if (s.size() != 0) {
			while (temp > s.top()) {
				compare.push_back(s.top()); //나가는 것들을 모은 벡터
				s.pop();
				res += "O";
				if (s.size() == 0) break;
			}
			//push하기 전에 검사
			for (int j = 0; j < compare.size(); j++) {
				if (compare[j] > temp) { //이미 나갔던 거보다 작은 게 들어오면 걍 바로 impossible
					cout << "impossible" << endl;;
					return 0;
				}
			}
			s.push(temp);
			res+= "P";
		}
		else {
			s.push(temp);
			res+="P";
		}
		
	}

	while (s.size() !=0) {
		res+="O";
		s.pop();
	}

	cout << res << endl;

}

/* 모범답안

#include<stdio.h>
#include<stack>
#include<vector>
using namespace std;
int main(){
	stack<int> s;
	int i, j=1, n, m;
	scanf("%d", &n);
	vector<char> str;
	for(i=1; i<=n; i++){
		scanf("%d", &m);
		s.push(m);
		str.push_back('P');
		while(1){
			if(s.empty()) break;
			if(j==s.top()){
				s.pop();
				j++;
				str.push_back('O');
			}
			else break;
		}
	}
	if(!s.empty()) printf("impossible\n");
	else{
		for(i=0; i<str.size(); i++) printf("%c", str[i]);
	}
	return 0;
}




*/