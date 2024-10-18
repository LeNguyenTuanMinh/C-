#include <iostream>
using namespace std;
int main(){
	int n,e=0,o=0,i=0;
	for (;;){
	cout<<"Nhap n: ";
	cin>>n;
	if (n == 0)
	break;
	else if (n%2==0){
	e = e + 1;
    if (n%8 == 0)
	i = i + 1;
}
	else if (n%2==1)
	o = o + 1;

	}
	cout<<"So so chan la: "<<e<<endl;
	cout<<"So so le la: "<<o<<endl;
	cout<<"So so chia het cho 8 la: "<<i;
}

