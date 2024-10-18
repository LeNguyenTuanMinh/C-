#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	if (x == 1){
		cout<<x<<" khong phai la so nguyen to";
        return 0; 
	}
	for (int i = 2; i < x;i++){
	if ( x % i == 0){
			cout<<x<<" khong phai la so nguyen to";
			return 0; 
	}
	}
	cout<<x<<" la so nguyen to";

}
