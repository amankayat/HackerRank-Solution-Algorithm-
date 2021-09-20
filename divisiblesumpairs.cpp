#include<iostream>
#include<stdio.h>
using namespace std;
int div_sumpair(int n,int a[],int k){
    int count=0;
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(i<j){
        
            if((a[i]+a[j])%k==0)
            count++;
            
                }
        }
    }
    return count;
}

int main(){
    int n,k,a[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int result  = div_sumpair(n,a,k);
    cout<<result;
}

