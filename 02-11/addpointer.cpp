#include<iostream>
using namespace std;
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	// bool b = true;
	// bool* bptr = &b;

	// double d = 123.245;
	// double *dptr = &d;

	// cout<<*arr<<endl;
	// cout<<*arr+1<<endl;
	// cout<<*arr+2<<endl;
	// cout<<*arr+3<<endl;
	// cout<<*arr+4<<endl;

	for(int i = 0; i < 5; i++){
		cout<<*(arr+i)<<" ";
	}cout<<endl;
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;

	// *(arr+i) == arr[i];
	// (arr+i) == &arr[i];

	// cout<<bptr<<endl;
	// cout<<bptr+1<<endl;
	// cout<<dptr<<endl;
	// cout<<dptr+1<<endl;

	return 0;
}