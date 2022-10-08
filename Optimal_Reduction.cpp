#include <bits/stdc++.h>
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

int main() {
int t;
cin>>t;
while(t--)
{
   int n;cin>>n;
  int arr[n];
  set<int>s;
  for(int i=0;i<n;i++)
  	{cin>>arr[i];
  s.insert(arr[i]);
    }
int m=0,mi,f=0,k=1;
for(int i=0;i<n;i++)
{
  if( f==1 && arr[i]>mi)
	{ k=0; break;}
else if(arr[i]>=m)
	m=arr[i];
else if(arr[i]<m)
	{f=1;mi=arr[i];}
 
}

if(k)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;







// int c=0,ans1=0,ans2=0,f=0;
// for(int i=0;i<n;i++)
// {
// arr[i]=arr[i]-ans1;

// 	if(arr[i]<ans1)
// 		continue;
// 	else{

// 	//arr[i]=arr[i]-c;
// 	ans1+=arr[i];
// 	//c+=arr[i];
// }
// } 
// ans2=*max_element(arr,arr+n);
// cout<<ans1<<" "<<ans2<<endl;
// if(ans1<=ans2)
// 	cout<<"NO"<<endl;
// else
// 	cout<<"YES"<<endl;
}

}
