#include<iostream>
using namespace std;
int main(){
	int n,r,r1,r2;
	cout<<"Nhap so nguyen can xac dinh: ";
	cin>>n;
	r1 = 0;
	r2 = 1;
	if (n == 0){
	cout<<n<<" nam trong day Fibonacci";
	return 0;
}
	for (;;){
		r = r1 + r2;
		r1 = r2;
		r2 = r;
        if (n == r){
        	cout<<n<<" nam trong day Fibonacci";
        	break;
		}
		else if (r > n){
			cout<<n<<" khong nam trong day Fibonacci";
			break;
		}
	}
} 
