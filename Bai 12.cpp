#include<iostream>
using namespace std;
int main(){
	int n,s,s1 = 0;
	float r,r1,r2;
	for(int i = 1; i <= 4; i++){
		cout<<"Nhap vao so nguyen thu "<<i<<": ";
		cin>>n;
		if ( n > 9 || n <= 0){
			cout<<"So ban nhap khong hop le";
			return 0;
		}
		s = n + s1*10;
		s1 = s;
	}
	r1 = s/2;
		for (;;){
		r2 = s/r1;
		r = ( r1 + r2 )/2;
		if ( r1 - r <= 0.0001 && r1 - r > 0){  //Da thua thay, sai so la epsilon qua be nen chuong trinh khong chay
			break;
		}
		r1 = r;
	} 
	
	cout<<"Can bac 2 cua so nguyen tao thanh tu 4 so do la: "<<r;
}
