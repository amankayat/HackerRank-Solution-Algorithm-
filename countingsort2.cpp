#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int hash[100]={0};
	for(int i=0;i<n;i++){
		hash[a[i]]++;
	}
	for(int i=0;i<100;i++){
		int ele = hash[i];
		for(int j=0;j<ele;j++)
		cout<<i<<" ";
	}
}
