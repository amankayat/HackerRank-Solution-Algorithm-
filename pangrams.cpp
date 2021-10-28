#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	string str;
	
	getline(cin,str);
	string new_str = "";
	int hash1[26] = {0};
	int hash2[26] = {0};
	string small ="abcdefghijklmnopqrstuvwxyz";
	string capital = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	//hash small
	for(int i=0;i<small.length();i++){
		if(new_str[i]>=97)
		small[small[i]- 'a']++;
		else
		capital[capital[i]- 'A']++;
	}

	
	//remove space from string

	for(int i=0;i<str.length();i++){
		if(str[i]==' ')
		continue;
		else
		new_str+=str[i];
	}

//hashing new string
int hash_new[26] ={0};
	for(int i=0;i<new_str.length();i++){
		if(new_str[i]>=97)
		hash_new[new_str[i]- 'a']++;
		else
		hash_new[new_str[i]- 'A']++;
		
	}


int count=0;
	for(int i=0;i<26;i++){
		if(hash_new[i]>0)
		count++;
	
	}
	if(count==26)
	cout<<"pangram";
	else
	cout<<"not pangram";
}
