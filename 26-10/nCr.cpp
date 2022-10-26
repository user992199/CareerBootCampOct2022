#include<iostream>
using namespace std;

int fact(int n){
	int prod = 1;
	for(int i = 1; i <= n; i++){ // i = 1, n = 0, i <= n, 1 <= 0
		prod *= i;
	}
	return prod;
}

int nCr(int n, int r){
	return fact(n)/(fact(r)*fact(n-r)); // n! / ((r!) * (n-r)!)
}

int main(){
	int n = 5, r = 3;
	cout<<nCr(n, r)<<endl;
	return 0;
}