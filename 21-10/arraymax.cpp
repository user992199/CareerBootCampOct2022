#include<iostream>
using namespace std;
int main(){
	int arr[5] = {10, 9, 14, 19, 18};
	int n = sizeof(arr)/sizeof(arr[0]);
	// arr[5] = 100;
	arr[6] = 101;
	// arr[7] = 102;
	arr[8] = 103;
	// output loop
	for(int i = 0; i < 15; i++){
		cout<<arr[i]<<" "; 
	}cout<<endl;
	// // input loop
	// for(int i = 0; i < 10; i++){
	// 	cin>>arr[i];
	// }
	// output loop
	// for(int i = 0; i < n; i++){
	// 	cout<<arr[i]<<" ";
	// }cout<<endl;
	return 0;
}