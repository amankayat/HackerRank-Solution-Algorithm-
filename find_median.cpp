#include<iostream>
#include<vector>
#include <bits/stdc++.h>
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
	
	//sort using sort function
	sort(a.begin(),a.end());
	
	
	//using insertion sort one test case fails so its better to use sort function
	//insertion sort
//	for(int i=1;i<n;i++){
//		for(int j=i;j>0;j--){
//			if(a[j] < a[j-1]){
//				int temp = a[j];
//				a[j] = a[j-1];
//				a[j-1] = temp;
//			}
//	}
//		}
	

	
	//find median
	int median_index  = (n/2);

	cout<<a[median_index];
}
