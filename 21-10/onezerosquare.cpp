#include<iostream>
using namespace std;

void printline(int n, int rowno){
	for(int colno = 0; colno < n; colno++){
		if((rowno+colno)%2 == 0){
			cout<<"1 ";
		}else{
			cout<<"0 ";
		}
	}cout<<endl;
	return;
}


int main(){
	int n;
	n = 10; // cin>>n;
	for(int rowno = 0; rowno < n; rowno++){
		printline(n, rowno);
	}
	return 0;
}