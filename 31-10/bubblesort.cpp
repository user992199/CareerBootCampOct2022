#include<iostream>
using namespace std;

void print_arr(int arr[], int n){
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void bubblesort(int arr[], int n){
	for(int i = 0; i < n-1; i++){ // 0 -> 3
		for(int j = 0; j < n-1; j++){ // 0 -> 3
			if(arr[j] > arr[j+1]){ // 0 -> 1
				swap(arr[j], arr[j+1]);
				// arr[j] = arr[j] + arr[j+1] - (arr[j+1] = arr[j]);
				/*
					a = a+b;
					b = a-b;
					a = a-b;
				*/
				/*
					int temp = a;
					a = b;
					b = temp;
				*/
			}
		}
	}
	return;
}

int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	bubblesort(arr, n);
	print_arr(arr, n);
	return 0;
}