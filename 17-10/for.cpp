#include<iostream>
using namespace std;
int main(){
	 // initialize
	int a = 10;
	for(; ; a = a-1){ // condition
		if(!(a>=0)){
			continue;
		}
		cout<<a<<" ";
		// a = a-1; // updation
	}
	cout<<"\nout of loop"<<endl;
	return 0;
}