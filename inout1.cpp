#include<iostream>
using namespace std;

int main() {
	char x;
	cin>>x;
	int d=int(x);
	if(d>65 && d<90){
		cout<<"1";
	}
	else if(d>97 && d<122){
		cout<<"0";
	}
	else{
		cout<<"-1";
	}
	
}