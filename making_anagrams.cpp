#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
	string str1;
	string str2;
	cin>>str1>>str2;
	int hash1[26]={0};
	int hash2[26] = {0};
	
	for(int i=0;i<str1.length();i++)
	hash1[str1[i]-'a']++;
	
	for(int i=0;i<str2.length();i++)
	hash2[str2[i]-'a']++;
	
	int sum1=0,sum2=0;
	for(int i=0;i<26;i++){
		if(hash1[i]!=hash2[i]){
			sum1 += abs(hash1[i]-hash2[i]);
			
		}
	}
	cout<<sum1;
	
	//display
//	for(int j=0;j<26;j++)
//	cout<<hash1[j]<<" ";
//	cout<<endl;
//	for(int k=0;k<26;k++)
//	cout<<hash2[k]<<" ";
	
}
