#include<iostream>
using namespace std;

char before(char x){
if(65<=x,x<=90){
	if(x==65){
		return 90;
	}
	
	if(x==48){
		return 48;
	}
	else
	{
		return x-1;
	}
}
return 48;
}
int main(){
char x;
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
