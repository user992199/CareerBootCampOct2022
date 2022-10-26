#include<iostream>
using namespace std;

void func(int &par){
	par = 10;
	cout<<par<<endl;
}

int main(){
	int arg = 5;
	cout<<arg<<endl;
	func(arg);
	cout<<arg<<endl;
	return 0;
}