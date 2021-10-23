#include<iostream>
#include<stdio.h>
using namespace std;
void super_digit(int x){
	int count=0;
	int sum=0;
	while(1){
	sum=0;
	while(x>0){
	
		int rem = x%10;
		sum +=rem;
		x = x/10;
		
}
     x=sum;
     //find length of x
    int len=1;
    if(sum>0){
    	for(len=0;sum>0;len++)
    	sum=sum/10;
	}
    
//     cout<<"length of sum is:"<<len<<"\n";
     
     if(len==1)
     break;
    }
	cout<<x;;
}

int main(){
	int n,k;
	cin>>n>>k;
	int sum=0;
	while(n>0){
	int rem = n%10;
	sum+=rem;
	n=n/10;	
	}
	sum = sum*k;
	super_digit(sum);
}
