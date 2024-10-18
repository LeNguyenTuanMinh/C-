#include<iostream>
using namespace std;
int main(){
	int n, nmax, nmin;
	nmax = INT_MIN; 
	nmin = INT_MAX;
	for(;;){
	cout<<"Nhap vao gia tri: ";
	cin>>n;
	if (n == 0)
	break;
	if (n > nmax){
		nmax = n; 
	} 
	if (n < nmin){
		nmin = n;
	}
	}
	cout<<"Gia tri lon nhat la: "<<nmax<<endl;
	cout<<"Gia tri nho nhat la: "<<nmin;
}
