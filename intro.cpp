#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int v,n;
	cin>>v;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	//check and print v's index
	
	for(int i=0;i<n;i++){
		if(a[i]==v)
		{
			cout<<i;
			break;
		}
	}
	
	
}
