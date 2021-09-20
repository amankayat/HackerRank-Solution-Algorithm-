#include<iostream>
#include<stdio.h>
using namespace std;

void min_max(long a[5]){
	long max=a[0];
	long min=a[0];
	long sum=0;
	for(int i=1;i<5;i++){
		if(max<a[i]){
			max=a[i];
		}
		
	}
	for(int i=1;i<5;i++){
		if(min>a[i]){
			min=a[i];
		}
		
		
	}
	
	for(int i=0;i<5;i++){
		sum+=a[i];
	}
	cout<<sum-max<<" "<<sum-min;
	
	

   
	
}

int main(){
	long a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	min_max(a);
}
