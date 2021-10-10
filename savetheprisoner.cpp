#include<iostream>
#include<stdio.h>
using namespace std;
int savetheprisoner(long n,long m,long s){
	long count=(m+s-1)%n;
	if(count==0)
	count=n;
	

	return count;
}
int main(){
	int test;
	long n,m,s,k=0,result[100];
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>n>>m>>s;
		result[k] = savetheprisoner(n,m,s);
		k++;
	}
	for(int i=0;i<k;i++)
	cout<<result[i]<<"\n";
}
