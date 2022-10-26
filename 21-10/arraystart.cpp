#include<iostream>
using namespace std;
int main(){
	// syntax
	// data_type identifier/name_of_array[number_of_buckets];
	int arr[10] = {10, 9, 14, 19, 18};
	int n = sizeof(arr)/sizeof(arr[0]);
	// output loop
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	// input loop
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	// output loop
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}