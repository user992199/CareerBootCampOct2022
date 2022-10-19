#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; // 4
	for(int row = 1; row <= n; row = row + 1){
		for(int space = 1; space <= n-row; space = space + 1){
			cout<<"\t";
		}
		for(int count = 1; count <= row; count = count + 1){ // j = 3
			cout<<count<<"\t";	// op - ***
		}
		for(int count = row - 1; count >= 1; count = count - 1){
			cout<<count<<"\t";
		}
		cout<<endl; 
	}
	return 0;
}