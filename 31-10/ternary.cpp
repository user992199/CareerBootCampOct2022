#include<iostream>
using namespace std;
int main(){

	int t = 0;

	if(t>0){
		cout<<"natural number\n";
	}else{
		cout<<"not a natural number\n";
	}

	t>=0 ? t==0 ? cout<<"zero\n" : cout<<"-ve number\n" : cout<<"not a natural number\n";

	return 0;
}