#include<iostream>
#include<stdio.h>
using namespace std;

int str_construction(string str){
	int hash[26] = {0};
	for(int i=0;i<str.length();i++)
	hash[str[i]-'a']++;
	
	int p=0;
	for(int i=0;i<26;i++){
		if(hash[i]>0)
		p++;
	}
	return p;
}
int main(){
	int test;
	cin>>test;
	string str;
	int res[test];
	int k=0;
	for(int i=0;i<test;i++)
	{
		cin>>str;
		res[k] = str_construction(str);
		k++;
	}
	
	//display
	for( int i=0;i<k;i++)
	cout<<res[i]<<" \n";
}
