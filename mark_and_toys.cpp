#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int n;
	long k;
	cin>>n>>k;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	//first sort the array
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
	long long int sum=0;
	int ct=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum<k){
			ct++;
		}
	}
	cout<<ct;
	
}
