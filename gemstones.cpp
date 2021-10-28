#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int size;
	cin>>size;
	string str;
	int c=0,count=0;
	int hash[26] = {0};
	int a[size][100] = {0};
	
	//input string and using hashing on string
	for(int i=0;i<size;i++){
		cin>>str;
		for(int j=0;j<str.length();j++)
		hash[str[j]-'a']++;
		
		for(int k=0;k<26;k++)
		a[i][k] = hash[k];
		
		for(int l=0;l<26;l++)
		hash[l]= 0;
	}
	

//compare each column
for(int i=0;i<26;i++){
	for(int j=0;j<size;j++){
		if(a[j][i]>0)
			count++;
			
		
	}
	if(count==size)
	c++;
	
	count=0;
}
cout<<c;

	return 0;
}
