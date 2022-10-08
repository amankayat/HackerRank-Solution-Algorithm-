#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,a,b,lo,hi,mid,ans;
    cin>>n;
    vector <int>v;
    cin>>a;
    v.push_back(a);
    for(i=1;i<n;i++)
    {
        cin>>b;
        
        if(a==b)
        continue;

        v.push_back(b); 
        a=b;
    }
    cin>>m;
    long long brr[m];
    for(i=0;i<m;i++)
    cin>>brr[i];
    
   for(i=0;i<m;i++)
    {
        lo=0;
        hi=v.size()-1;
        
            if(brr[i]>=v[0])
            {
                cout<<"1"<<endl;
                continue;
            }
            
            else if(brr[i]<v[hi])
            {
                cout<<v.size()+1<<endl;
                continue;
            }
            
            else
            {
               while(lo<=hi)
               {
                   mid=(lo+hi)/2;
                   
                   if(v[mid]==brr[i])
                   {
                       ans=mid+1;
                       break;
                   }
                   else if(v[mid]>brr[i])
                   lo=mid+1;
                   
                   else
                   {
                       ans=mid+1;
                       hi=mid-1;
                   }   
               }
            }   
            cout<<ans<<endl;         
    }
    
}
