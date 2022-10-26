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

int main(){
	int n = 729;
	if(checkprime(n)){
		cout<<"Yes the given number is a prime number\n";
	}else{
		cout<<"No the given number is not a prime number\n";
	}
	return 0;
}