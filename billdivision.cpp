#include<iostream>
#include<stdio.h>
using namespace std;

void bill_division(int n,int k,int bill[],int b){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=bill[i];
	}
	int actual = (sum-bill[k])/2;
	if(actual==b)
	cout<<"Bon Appetit";
	else if(actual<b){
		cout<<b-actual;
	}
	else
	cout<<actual-b;
	
	
}
int main(){
	int n,k,b;
	cin>>n>>k;
	int a[100000];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>b;
	bill_division(n,k,a,b);
	
}
