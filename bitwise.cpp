#include<iostream>
#include<bitset>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
cout<<"binary of"<<a<<" "<<bitset<8>(a)<<endl;
cout<<"binary of" <<b<<" "<<bitset<8>(b)<<endl;
cout<<(a&b)<<endl;
cout<<(a|b)<<endl;
cout<<(~a)<<endl;
cout<<(a^b)<<endl;
cout<<(a<<1)<<endl;
cout<<(a>>1)<<endl;
}
