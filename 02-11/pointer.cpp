#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int *intptr;
	cout<<intptr<<endl;
	intptr = &i;
	cout<<intptr<<endl;
	cout<<&i<<endl;
	return 0;
}