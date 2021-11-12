#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
        for(int i=0;i<n;i++)
            a[i] = i;
    vector<int> ar;
    for(int i=0;i<m;i++)
    {
    int x;
    cin>>x;
    ar.push_back(x);
////    a[ar[i]] = ar[i];    
    }
    sort(ar.begin(),ar.end());
    


//checking
vector<int> store;

int j,k;
int num=0,flag=0;
if(m==n)
cout<<"0";
else{
    

int clen = ar[0] - 0;
store.push_back(clen);
int mid;
for(int i=0;i<m-1;i++){
    clen = ar[i+1] - ar[i] -1;

    if(clen%2==0){
         mid = clen/2;
    }else
     mid = (clen+1)/2;
     
    store.push_back(mid);
}
clen = a[n-1] - ar[m-1];
store.push_back(clen)    ;

int max = *max_element(store.begin(),store.end());
cout<<max;
}
    
}






