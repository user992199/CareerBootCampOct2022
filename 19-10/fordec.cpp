#include<iostream>
#include<climits>
using namespace std;

void greeting(); // forward declaration
void printbye();

// return_type identifier / function_ka_naam(int i){}

void printhello(){
	greeting();
	// for(int i = 0; i < n; i++){
		cout<<"hello world\n";
	// }
	printbye();
}

void printbye(){
	cout<<"Bye World\n";
}

void greeting(){
	printbye();
}

int main(){
	printhello();
	printbye();

	return 0;
}