#include<iostream>
using namespace std;
int main(){
  int n,result=1;
  cout<<"Nhap N: ";
  cin>>n;
  for (int i = 1; i <= n; i++){
  	result = i*result;
  }
  std::cout<<"Gia tri cua N! la: "<<result;
}
