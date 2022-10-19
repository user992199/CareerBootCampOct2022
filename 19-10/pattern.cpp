#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; // 4
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){ // j = 3
			cout<<"*";	// op - ***
		}
		cout<<endl; 
	}
	return 0;
}