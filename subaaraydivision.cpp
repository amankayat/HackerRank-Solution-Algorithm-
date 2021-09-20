#include<iostream>
#include<stdio.h>
using namespace std;

int array_division(int s[],int n,int d,int m){
	int count=0;
   
	for(int i=0;i<n;i++){
		
        int sum=0;
        for(int j=i;j<m+i;j++){
            sum+=s[j];
        }
        if(sum==d)
        count++;
		
        
			
	}
	return count;
}
int main(){
	int n,d,m;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
	cin>>d>>m;
	int results = array_division(s,n,d,m);
	cout<<results;
	
	
	
}

