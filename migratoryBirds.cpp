#include<iostream>
#include<stdio.h>
using namespace std;

int migratory_birds(int a[],int len){
	
	int c[5];
	int count=0,one=0,two=0,three=0,four=0,five=0;
	
	for(int i=0;i<len;i++){
	 if(a[i]==1)
	 one+=1;
	 else if(a[i]==2)
	 two+=1;
	 
	 else if(a[i]==3)
	 three+=1;
	 else if(a[i]==4)
	 four+=1;
	 else if(a[i]==5)
	 five+=1; 
	}
	c[0]=one;
	c[1]=two;
	c[2]=three;
	c[3]=four;
	c[4]=five;
	
	int max_c =c[0];
	for(int k=0;k<5;k++){
		if(max_c<c[k])
		max_c = c[k];
	}
	if(max_c==one)
	return 1;
	else if(max_c==two)
	return 2;
	else if(max_c==three)
	return 3;
	else if(max_c==four)
	return 4;
	else if(max_c==five)
	return 5;
	else
	return 0;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	
   int result = migratory_birds(a,n);
	cout<<result;
}

