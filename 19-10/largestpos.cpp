#include<iostream>
#include<climits>
using namespace std;

// return_type identifier / function_ka_naam(int i){}
void printhello(int n, int cnt){
	cout<<cnt<<" ";
	for(int i = 0; i < n; i++){
		cout<<"hello world\n";
	}
}

int largest(){
	int n;
	int largest = INT_MIN, num;
	cin>>n; // INT_MAX
	for(int i = 0; i < n; i++){ // i = 5; 5 < 10; n = 10
		cin>>num; // num = 2
		if(largest < num){
			largest = num; // largest = num = 23
		}
	}
	return largest;
}	

int main(){
	printhello(5, 7);
	printhello(10, 3);
	int lag = largest();
	cout<<"inside main: "<<lag<<endl;
	cout<<"inside main: "<<largest()<<endl;
	cout<<"inside main: "<<largest()<<endl;

	return 0;
}