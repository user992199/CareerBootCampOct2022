#include<iostream>
using namespace std;
int main(){
	int i = 10;
	char ch = 'a';

	int * iptr = (int*)&ch;
	double * dptr = (double*)iptr;
	char *chptr = (char*)iptr;

	cout<<chptr<<endl;
	cout<<iptr<<endl;
	cout<<dptr<<endl;

	cout<<*chptr<<endl;
	cout<<*iptr<<endl;
	cout<<*dptr<<endl;


	return 0;
}