#include<iostream>
using namespace std;
int main(){
	int m,n,c;
	cout<<"Nhap m va n: ";
	cin>>m>>n;
	c = 1;
	for (int i = 1; i <= m; i ++){
		for (int j = 1; j <= n; j++){
			cout<<c<<"\t";
			c++;
		}
		cout<<endl;
	}
}
