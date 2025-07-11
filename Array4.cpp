#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int a=1;
for(int i=0;i<n-1;i++){
if (arr[i]>arr[i+1]){
a=0;}}
if(a==0){
cout<<"Not sorted";}
else if(a==1){
cout<<"Sorted";}}
