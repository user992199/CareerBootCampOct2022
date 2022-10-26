#include<iostream>
using namespace std;

int fact(int n){
	int prod = 1;
	for(int i = 1; i <= n; i++){ // i = 1, n = 0, i <= n, 1 <= 0
		prod *= i;
	}
	return prod;
}

int main(){
	int n = 10;
	cout<<fact(n)<<endl;
	return 0;
}