#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	//first we sort the elements using insertion sort
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(a[j] < a[j-1]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
			else
			break;
		}
	}
	int c=n;
	long long int min_miles=0;
	for(int i=n-1;i>=0;i--){
		min_miles+=a[i] * pow(2,(n-c));
	
		c--;
	}
	cout<<min_miles;
}
