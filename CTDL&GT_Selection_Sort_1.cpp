#include <iostream>
using namespace std;
#define MAX 100

void NhapMang(int a[MAX], int &n) {
do{
cout<<"\nNhập số phần tử: ";
cin>>n;
if(n <= 0 || n > MAX){
cout<<"Số phần tử của mảng a không hợp lệ, xin vui lòng nhập lại";
}
}while(n<=0 || n> MAX);
for(int i = 0; i < n; i++){
cout<<"Nhập a["<<i<<"]= ";
cin>>a[i];
}
}
void XuatMang(int a[MAX], int n){
cout<<"Các phần tử có trong mảng là: \n";
for(int i = 0; i < n; i++){
cout<<a[i]<<"\t";
}
}

void DoiSo(int &x, int &y){
int z =x;
x=y;
y=z;
}
