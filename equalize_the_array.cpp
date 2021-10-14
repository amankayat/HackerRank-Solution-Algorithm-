#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int equalize_the_array(vector<int> a){
	
int hash[100] = {0};
	for(int i=0;i<a.size();i++){
		hash[a[i]]++;
	}
	
	int max = hash[0];
	for(int i=0;i<100;i++){
		if(max<hash[i])
		max = hash[i];
	}
	return a.size()-max;
	
}
int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{int x;
	cin>>x;
	a.push_back(x);	
	}
	int res = equalize_the_array(a);
	cout<<res;
	
	
	
	
}
