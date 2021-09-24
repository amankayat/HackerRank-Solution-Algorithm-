#include<iostream>
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int sale_match(int a[],int n){
	int count =0;
	int store=0,sum=0;
	int c[100];
	for(int i=1;i<=100;i++){
		for(int j=0;j<n;j++){
			if(a[j]==i){
				count++;
			}
		}
		c[store]=count;
		store++;
		count=0;
	
	}
	//print
	for(int h=0;h<store;h++)
	{
		sum = floor(c[h]/2)+sum;
	}
	
	return sum;
		
}

int main(){
	int n,a[100];

	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int result = sale_match(a,n);
	cout<<result;
}
