#include<iostream>
using namespace std;
int main(){
	int k,n,kf = 1,nf = 1,knf = 1,result;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap k: ";
	cin>>k;
	for (int i = 1; i<=n;i++){
		nf = nf * i;
	}
	for (int i = 1; i<=k;i++){
		kf = kf * i;
	}
	for (int i = 1; i <= n - k;i++){
		knf = knf *i;
	}
	result = nf/(knf*kf);
	cout<<"Ket qua la: "<< result;
} 
