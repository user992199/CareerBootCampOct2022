#include<iostream>
using namespace std;
int k = 10;
char ch = 'c';

int main(){
	::k++; // 10->11
	for(int i = 0; i < 5; i++){
		int k = 0;
		cout<<k<<endl;
		::k++; // ::
	}
	cout<<"out of the loop\n";
	cout<<k<<endl;
	return 0;
}