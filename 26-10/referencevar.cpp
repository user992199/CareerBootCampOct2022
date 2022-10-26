#include<iostream>
using namespace std;

int main(){
	int arg = 5;
	int &a = arg;
	cout<<arg<<endl;
	cout<<a<<endl;
	a += 5;
	cout<<arg<<endl;
	cout<<a<<endl;
	return 0;
}