#include <iostream>
using namespace std;

void printline(int n, int start){
	int end = start + n;
	for(int i = start; i < end; i++){
		cout<<i<<" ";
	}
	cout<<endl;
	return;
}

int main(){
	int n = 4;
	// cin>>n;
	int row_start = 1;
	for(int row = 1; row <= n; row++){
		printline(row, row_start);
		// update row_start
		row_start = row_start + row;
		// row_start += row;
	}
	return 0;
}