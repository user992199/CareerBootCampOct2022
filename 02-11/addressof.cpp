#include<iostream>
using namespace std;
int main(){
	int i = 10;
	float f = 10.12;
	bool b = false;
	double d = 66213.122131231231231;
	cout<<&i<<endl;
	cout<<&f<<endl;
	cout<<&b<<endl;
	cout<<&d<<endl;

	cout<<sizeof(i)<<endl;
	cout<<sizeof(f)<<endl;
	cout<<sizeof(b)<<endl;
	cout<<sizeof(d)<<endl;

	cout<<sizeof(&i)<<endl;
	cout<<sizeof(&f)<<endl;
	cout<<sizeof(&b)<<endl;
	cout<<sizeof(&d)<<endl;
	
	return 0;
}