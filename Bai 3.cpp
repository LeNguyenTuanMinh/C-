#include<iostream>
using namespace std;
int main(){
	int n;
	float S;
	cout<<"Nhap n: ";
	cin>>n;
	S = 1;
	float luythua = 1;
	for (int i = 1; i <= n;i++){
		luythua *= 2;
		S = S + (1.0/luythua);
	}
	cout<<"Gia tri cua S la: "<<S;
}
