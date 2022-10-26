#include<iostream>
using namespace std;

bool checkprime(int n){
	if(n == 1){
		return false;
	}
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

void printprime(int n1, int n2){
	for(int i = n1; i <= n2; i++){
		if(checkprime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return;
}

int main(){
	int n1 = 1, n2 = 10;
	printprime(n1, n2);
	return 0;
}