#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int largest=a;
if(b> largest )largest =b;
if(c>largest) largest=c;
int smallest =a;
if(b<smallest)smallest =b;
if(c<smallest)smallest =c;
cout<<largest<<endl;
cout<<smallest<<endl;

if(a>b) swap(b,a);
if(a>c) swap(c,a);
if(b>c) swap(c,b);
cout << a << b << c  <<endl;
cout<<c<<b<<a;

}
