#include<iostream>
using namespace std;
int main(){
	float a,a2,b,b2,c,c2;
	cout<<"Nhap vao ba canh cua tam giac: ";
	cin>>a>>b>>c;
	a2 = a*a;
	b2 = b*b;
	c2 = c*c;
	if ( a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2){
		cout<<"Tam giac vuong";
	}
	else if ( a2 == b2 && b2 == c2){
		cout<<"Tam giac deu";
	}
	else if ( a2 == b2 || b2 == c2 || c2 == a2){
		cout<<"Tam giac can";
	}
	else
	cout<<"Tam giac";
}
