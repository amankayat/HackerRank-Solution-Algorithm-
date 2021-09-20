#include<iostream>
#include<stdio.h>
using namespace std;
void ratioarray(float a[100],int n){
	float positive=0;
	float negative =0;
	float zeros = 0;
	float arr[100];
	for(int i=0;i<n;i++){
		if(a[i]<0){
			negative+=1;
		}
		else if(a[i]>0){
			positive+=1;
		}
		else{
			zeros+=1;
		}
	}
	cout<<float(positive/n)<<"\n";
	cout<<float(negative/n)<<"\n";
	cout<<float(zeros/n)<<"\n";
	
}

int main(){
	int n;
	float ar[100],result[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		
	}
	ratioarray(ar,n);
	
	
}
