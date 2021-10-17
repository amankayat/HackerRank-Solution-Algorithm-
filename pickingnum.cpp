#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
using namespace std;
int pickingnumbers(vector<int> a){
    
    int result=2;
    int freq[101]={0};
   
    
    for(int i=0;i<a.size();i++)
    freq[a[i]]++;
    
    for(int j=1;j<=100;j++)
    result = max(result,freq[j]+freq[j-1]);

    return result;
}

int main(){
    int n;
    cin>>n;
   
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    int result = pickingnumbers(a);
    cout<<result;
    }

