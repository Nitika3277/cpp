#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];}
 int b;
 cin>>b;
 int count=0;
 for(int i=0;i<=n;i++){
 if(b==arr[i]){
 count++;
 }}
 cout<<count;


 }
