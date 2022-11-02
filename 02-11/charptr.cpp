#include<iostream>
using namespace std;
int main(){


	// int i = 22;
	// cout<<i/7<<endl;
	// cout<<(float)i/7<<endl;
	// cout<<(double)i/7<<endl;

	char ch1 = 'a';
	char ch2 = 'b';
	char ch3 = 'c';

	cout<<&ch1<<endl;
	cout<<&ch2<<endl;
	cout<<&ch3<<endl;

	cout<<(float *)&ch1<<endl;
	cout<<(int *)&ch2<<endl;
	cout<<(int *)&ch3<<endl;	

	return 0;
}