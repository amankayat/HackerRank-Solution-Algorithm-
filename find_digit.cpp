#include<iostream>
#include<stdio.h>

using namespace std;
int find_digit(int n){

	int count=0,len;
	int copy_n  = n;
	int copy_n_2= n;
	//find integer length
	if(n>0){
		for(len=0;n>0;len++){
			n = n/10;
		}
	}
	//store integer one by one into array
		int store[len];
		
	for(int i=len-1;i>=0;i--){
		
		store[i] = copy_n%10;
	
		copy_n/=10;
		
	}

//main operation
	for(int i=0;i<len;i++){
		if(store[i]>0){
		
		if(copy_n_2%store[i]==0){
			count++;
		}
		}else{
			
		}
	}
return count;
}
int main(){
	int test,k=0;
	int n,results[15];
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>n;
		results[k] = find_digit(n);
		k++;
	}
	for(int j=0;j<k;j++)
	cout<<results[j]<<"\n";


}
