#include<bits/stdc++.h>
using namespace std;
#define pfi(a) printf("%d",a);
#define pfl(a) printf("%lld",a);
#define pfin(a) printf("%d\n",a);
#define pfln(a) printf("%lld\n",a);
#define pfis(a) printf("%d ",a);
#define pfls(a) printf("%lld ",a);
#define sfi(a) scanf("%d",&a);
#define sfl(a) scanf("%lld",&a);
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb(a) push_back(a)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define lb lower_bound
#define ub upper_bound
#define bp(i) __builtin_popcount(i)
ll mod=1e9+7;

int main()
{
int n;cin>>n;
int arr[n];
int dp[3005]={0};
f(i,0,n)
{cin>>arr[i];
   dp[arr[i]]++;}
int i=0,j=1,f=0;
int k=*max_element(arr,arr+n);
ll c=0;

for(int i=1;i<=k;i++)
   {
    while(dp[i]>1)
    { if(j<i)
      j=i+1;
      if(j>=3003)
      {
         j++;
      }
      else{
       while(dp[j]!=0)
       {
         j++;
       }
       dp[j]++;
    }
     
     dp[i]--;
     c+=(j-i);
    }
}
cout<<c<<endl;
}






 
