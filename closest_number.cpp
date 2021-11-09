#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;
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
	
	//sort using vector
	//you can also use insertion sort or any sorting method here but one test case fails using any method so yu can use sort function to sorting
//	this array
	
	sort(a.begin(),a.end());
	
	

    int store[n];
	int min = INT_MAX;
	//check which difference is min & find min
	for(int i=0;i<n-1;i++){
		store[i] = abs(a[i]-a[i+1]);
		
		if(min>store[i])
		min = store[i];
	}
	

//checking
for(int i=0;i<n-1;i++){
	if(abs(a[i]-a[i+1])==min){
		cout<<a[i]<<" "<<a[i+1]<<" ";
	}
}

}
