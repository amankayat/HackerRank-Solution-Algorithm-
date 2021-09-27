#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int pickingnumbers(int a[]){
    int count=0;
    int result=2;
    int freq[101]={0};
    for(int i=0;a[i]!='\0';++i)
    count++;
    
    for(int i=0;i<count;i++)
    freq[a[i]]++;
    
    for(int j=1;j<=100;j++)
    result = max(result,freq[j]+freq[j-1]);

    return result;
}

int main(){
    int n;
    cin>>n;
   
    int a[100];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int result = pickingnumbers(a);
    cout<<result;
    }

