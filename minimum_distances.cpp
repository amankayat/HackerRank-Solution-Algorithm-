#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int minimum_distances(vector<int> a){
	vector<int> store;
	int flag=0;
	for(int i=0;i<a.size();i++){
		for(int j=i;j<a.size()-1;j++){
			if(a[i]-a[j+1]==0){
				store.push_back(abs(i-(j+1)));
				
				flag=1;
			}
		}
	}
	
	int min =-1;
	
	if(flag==1)
	{
	 min = *min_element(store.begin(),store.end());
		return min;
	}
	
	else
	return -1;
	
	
}
int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	
	int result= minimum_distances(a);
	cout<<result;
}
