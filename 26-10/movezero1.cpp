#include<iostream>
using namespace std;

void printarr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void movezero(int arr[], int n){
	int res[100] = {0};
	int j = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] != 0){
			res[j++] = arr[i];
		}
	}
	for(int i = 0; i < n; i++){
		arr[i] = res[i];
	}
	return;
}

int main(){
	int arr[] = {1, 4, 0, -3, 0, 2, 1, 0, 0, 0, 0, 1, 0};
	int n = sizeof(arr)/sizeof(int);
	printarr(arr, n);
	movezero(arr, n);
	printarr(arr, n);
	return 0;
}