#include<iostream>
#include<string>
using namespace std;

char before(char x){
	char ans;
	if (x == 'A') { 
		ans = 'Z';
		}else{
		ans = x-1;
		}
	if (x>'Z' || x<'A'){
	    ans = '0';
	}
	return ans;
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
