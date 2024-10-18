#include<iostream>
using namespace std;
int main(){
	int n,r = 0, r1 = 0 , r2 = 1;
	cout<<"Nhap n: ";
	cin>>n;
	printf("So Fibonacci so 1 la 0\n"); 
	for (int i = 1; i < n; i ++){
		r1 = r2;
		r2 = r;
		r = r1 + r2;
		cout<<"So Fibonacci so "<<i + 1<<" la "<<r<<endl;
	}
}
