#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; // 4
	for(int row = 1; row <= n; row = row + 1){
		for(int space = 1; space <= n-row; space = space + 1){
			cout<<" ";
		}
		for(int starno = 1; starno <= 2*row-1; starno = starno + 1){ // j = 3
			cout<<"*";	// op - ***
		}
		cout<<endl; 
	}
	return 0;
}