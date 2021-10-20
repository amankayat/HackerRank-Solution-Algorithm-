#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;
int jumping_the_clouds(vector<int> a,int k){
	int counter=0,energy=100;
	for(int i=0;i<a.size();i++){
		 
		counter = (counter+k)%a.size();
		
		if(a[counter]==1)
		energy-=3;
		else
		energy-=1;
		if(counter==0)
		break;
		
	}
	return energy;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	int res = jumping_the_clouds(a,k);
	cout<<res;
}
