#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	//using hashing
	int hash[101] = {0};
	for(int i=0;i<n;i++){
		hash[a[i]]++;
	}
	
	//checking which element is unique
	for(int i=0;i<101;i++){
		if(hash[i]==1)
		cout<<i;
	}
	
}
