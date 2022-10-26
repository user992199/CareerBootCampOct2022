#include<iostream>
using namespace std;

int arrmax(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int arrmin(int arr[], int n){
	int min = arr[0];
	for(int i = 1; i < n; i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int arrsum(int arr[], int n){
	int total = 0;
	for(int i = 0; i < n; i++){
		total += arr[i];
	}
	return total;

}

int main(){
	int arr[] = {11, 3, 45, 687, 312, 45, 89, -32, -12, -2, 34};
	int n = sizeof(arr)/sizeof(int);
	cout<<arrmax(arr, n)<<endl;
	cout<<arrmin(arr, n)<<endl;
	cout<<arrsum(arr, n)<<endl;
	return 0;
}