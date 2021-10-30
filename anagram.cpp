#include<iostream>
#include<stdio.h>
using namespace std;
int anagram_str(string str){
	
		string new_str ="";
	if(str.length()%2!=0)
	return -1;
	else{
		int len = str.length()/2;
		string l = str.substr(0,len);
		string r = str.substr(len,len);
		int hash_l[26]={0};
		int hash_r[26]={0};
		for(int i=0;i<l.length();i++)
		{
		hash_l[l[i]-'a']++;
		hash_r[r[i]-'a']++;	
		}
		int sum=0;
		for(int i=0;i<26;i++){
			if(hash_r[i]-hash_l[i]>0){
				sum+=(hash_r[i]-hash_l[i]);
			}
		}
		

			return sum;
	}

	
	
}

int main(){
	int size;
	cin>>size;
	string a[size];
	int res[size];
	int k=0;
	for(int i=0;i<size;i++)
	cin>>a[i];
	
	for(int i=0;i<size;i++){
		res[k] = anagram_str(a[i]);
		k++;
	}
	
	//display
	for(int i=0;i<k;i++){
		cout<<res[i]<<"\n";
	}
}
