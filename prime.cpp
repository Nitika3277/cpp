#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool a=true;
    if(n==0 || n==1){
        a=false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            a=false;
            break;
        }

    }
    if(a){cout<<"Prime";}

    else{cout<<"not";}
}
