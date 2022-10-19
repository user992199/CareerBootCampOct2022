#include<iostream>
using namespace std;
int main(){
	int a = 10; // initialize
	do{ // condition
		if(a == 5){
			continue;
			a = a-1;
		}
		cout<<a<<" "; 
		a = a-1; // updation
	}while(a<=0);
	cout<<"\nout of loop"<<endl;
	cout<<a<<endl;
	return 0;
}