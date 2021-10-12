#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int beautifulldays(int start,int end,int k){
	int count=0;
	int reverse=0,rem,copy;
	for(int i=start;i<=end;i++){
		copy = i;
	while(copy!=0)    
  {    
     rem=copy%10;      
     reverse=reverse*10+rem;    
     copy/=10;    
  }   

   if(abs(i - reverse)%k==0)
   count++;
   reverse=0;
	}
	return count;
}
int main(){
	int start,end,k;
	cin>>start>>end>>k;
	int result = beautifulldays(start,end,k);
	cout<<result;
}
