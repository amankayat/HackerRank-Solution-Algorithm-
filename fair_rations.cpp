#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
void fair_rations(vector<int> a){
	int count=0,loaf=0,flag=0;
	for(int i=0;i<a.size()-1;i++){
	if(a[i]%2!=0){
		
		a[i] = a[i]+1;
		a[i+1] = a[i+1]+1;
		loaf+=2;
	
	}
	
	}
	if(a[a.size()-1]%2!=0)
	cout<<"NO";
	else
	cout<<loaf;

	
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
	
	 fair_rations(a);
	
}
