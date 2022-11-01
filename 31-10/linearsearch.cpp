#include<iostream>
using namespace std;

void printarr(int arr, int n){
	int i = 0;
	while(i < n){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return;
}

int linearsearch(int arr[], int n, int key){
	int i = 0;
	printarr(arr, n);
	while(i < n){
		if(arr[i] == key){
			return i; // cout<<i<<endl; return;
		}
		i++;
	}
	return -1;
}

int main(){
	//           0  1  2  3  4   5     6    7
	int arr[] = {1, 3, 5, 8, 19, 100, -19, 88};
	int n = sizeof(arr)/sizeof(int);
	int key, i = 0;
	cin>>key;
	cout<<linearsearch(arr, n, key)<<endl;
	// while(i<n){
	// 	if(arr[i] == key){
	// 		cout<<i<<endl;
	// 		break;
	// 	}
	// 	i++;
	// }
	// if(i == n){
	// 	cout<<-1<<endl;
	// }
	return 0;
}