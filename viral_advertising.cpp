#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int viral_advertising(int n){
	int count=0,like,x;
	for(int i=1;i<=n;i++){
		if(i==1){
	
		
		x = floor(5/2);
		cout<<"x in dayu "<<x<<"\n";
		like =x;
		count=x;
			}
			else{
			
		x = like*3;
		like = floor(x/2);
		count+=like;
}
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	
	int res = viral_advertising(n);
	cout<<res;
}
