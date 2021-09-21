#include <bits/stdc++.h>

using namespace std;

int btwsets(int a[100],int b[100],int n,int m){
    int count=0,k=0,p,c[100];
     int last=a[n-1];
     while(last<=b[0]){
         for(int i=0;i<n;i++){
             if(last%a[i]==0)
                 p=1;
             else{
                 p=0;
                 break;
             }
             
            
         }
         if(p==1){
             c[k]=last;
             k++;
         }
         last++;
     }
     for(int i=0;i<k;i++){
         for(int j=0;j<m;j++){
             if(b[j]%c[i]==0)
                 p=1;
             else{
                 p=0;
                 break;
             }
         }
         if(p==1)
             count++;
     }
 return count;
}

int main(){
    int n,m,a[100],b[100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    int result  = btwsets(a,b,n,m);
    cout<<result;
}
