#include<iostream>
using namespace std;

void print_arr(int arr[], int n){
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void insertion_sort(int arr[], int n){
	for(int i = 1; i < n; i++){
		for(int j = i-1; j >= 0; j--){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
			}else{
				break;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	insertion_sort(arr, n);
	print_arr(arr, n);
	return 0;
}