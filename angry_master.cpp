#include<iostream>
#include<stdio.h>
using namespace std;
string angry_master(int k,int a[]){
	int count=0,y=0,n=0;
	//count the size of array
	for(int i=0;a[i]!='\0';i++)
	count++;
	
	
	for(int i=0;i<count;i++){
		if(a[i]<=0)
		y++;
		else
		n++;
	}
	if(y>=k)
	return "NO";
	else
	return "YES";
}
int main(){
	int test,n,k;
	cin>>test;
	int a[1000];
	string results[10];
	for(int i=0;i<test;i++){
		cin>>n>>k;
		for(int j=0;j<n;j++)
		cin>>a[j];
		results[i] = angry_master(k,a);
	}
	for(int i=0;i<test;i++)
	cout<<results[i]<<"\n";
}
