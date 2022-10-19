#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; // 4
	for(int row = 1; row <= n; row++){ // row = 2
		int h; // h
		if(row%2 == 0){ // row % 2 = 0
			h = 0; // h = 0
		}
		else{
			h = 1; // 
		}
		for(int number = 1; number <= row; number++){ // number = 2
			cout<<h; // 01
			if(h == 1){ // h == 1
				h = 0; // h = 0
			}
			else{
				h = 1; // h = 1
			}
		}
		cout<<endl; 
	}
	return 0;

	int number;
	number = number - 1;
	number -= 1;
	number--;
}