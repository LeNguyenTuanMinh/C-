#include<iostream>
using namespace std;
int main(){
	float r1, r2, r, n;
	double e = 1e-8;
	cout<<"Nhap vao so nguyen can tinh can bac 2: ";
	cin>>n;
	if (n < 0){
		cout<<"Ban nhap so khong hop le";
		return 0;
	}
	r1 = n/2;
	for (;;){
		r2 = n/r1;
		r = ( r1 + r2 )/2;
		if ( r1 - r <= e || r - r1 <= e && r1 - r > 0){  //Da thua thay, sai so la epsilon qua be nen chuong trinh khong chay
			break;
		}
		r1 = r;
	} 
	cout<<"Can bac 2 cua so do la: "<<r;
}
