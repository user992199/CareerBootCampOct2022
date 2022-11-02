#include<iostream>
using namespace std;
int main(){
	char arr[9] = {'r', 'a', 'h', 'u', 'l', '\0', 'a', 'b', 'c'};

	cout<<arr<<endl;
	cout<<arr[0]<<endl;
	cout<<&arr[0]<<endl;
	cout<<&arr[1]<<endl;
	cout<<&arr[2]<<endl;
	cout<<&arr[3]<<endl;
	cout<<&arr[4]<<endl;

	cout<<arr<<endl;

	return 0;
}