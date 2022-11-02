#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int * iptr = &i;
	cout<<iptr<<" == "<<&i<<endl;
	cout<<*iptr<<" == "<<i<<" == "<<*&i<<endl;

	*iptr = *iptr + 20;
	cout<<i<<endl;
	cout<<**&iptr<<endl;
	return 0;
}