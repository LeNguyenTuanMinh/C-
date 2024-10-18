#include<iostream>
using namespace std;
int main(){
	int x,n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	float result = 1;
	while (n--){
		result = result*x;
	}
	cout<<"Ket qua la: "<<result;
}
