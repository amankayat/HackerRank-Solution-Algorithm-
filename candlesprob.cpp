#include<iostream>
#include<stdio.h>
using namespace std;

int candlescount(int a[100000],int n){
	int c=0;
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i])
			max = a[i];
	}
	for(int i=0;i<n;i++){
		if(max==a[i])
			c++;
	}
	return c;
}

int main(){
	int n;
	int a[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count = candlescount(a,n);
	cout<<count;
	
}
