#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+10;
int hash1[N];
int hash2[N];
int main(){
	int n,m;
	cin>>n;
	int a[n],b[n];
	vector<int> res;
	//input array and hashing
	for(int i=0;i<n;i++)
	{cin>>a[i];
	hash1[a[i]]++;
	
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
	cin>>b[i];
	hash2[b[i]]++;	
	}
	

	//checking
	for(int i=0;i<m;i++){
		if(abs(hash1[b[i]]- hash2[b[i]])!=0){
			
			res.push_back(b[i]);
			
			
		}
	if(hash2[b[i]]!=0 && hash1[b[i]]==0){
		
			res.push_back(b[i]);
	}

		
	}
	
	sort(res.begin(),res.end());
	res.erase( unique( res.begin(), res.end() ), res.end() );
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	

	
}
