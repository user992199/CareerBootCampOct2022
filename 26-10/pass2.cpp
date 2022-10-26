#include<iostream>
using namespace std;

void func(int par[]){
	for (int i = 0; i < 5; ++i){
		par[i] *= 2;
	}
	for(int i = 0; i < 5; i++){
		cout<<par[i]<<" ";
	}cout<<endl;
	return;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	func(arr);
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}