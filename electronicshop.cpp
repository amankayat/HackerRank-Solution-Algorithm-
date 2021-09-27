#include<iostream>
#include<stdio.h>
using namespace std;
int electronic_shop(int key[],int usb[],int budget,int n,int m){
int max=-1,sum=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        
        sum=key[i] + usb[j];
        if(sum>max && sum<=budget)
        max=sum;
    }
}
return max;
}

int main(){

    int b,n,m;
    int k[1000000],u[1000000];
    
    cin>>b>>n>>m;
    for(int i=0;i<n;i++)
    cin>>k[i];
    for(int i=0;i<m;i++)
    cin>>u[i];
    int result = electronic_shop(k,u,b,n,m);
    cout<<result;
    
    
}

