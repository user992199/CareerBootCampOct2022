#include<iostream>
using namespace std;
int main(){
	int * rptr1 = NULL;
	int * rptr2 = NULL;
	
	int r = 7;
	rptr2 = &r;
	float circumference;
	// circumference = 2 * 3.14 * (*rptr1);
	circumference = 2 * 3.14 * (*rptr2);
	cout<<circumference<<endl;
	cout<<2 * 3.14 * r<<endl;

	return 0;
}