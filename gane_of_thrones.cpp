#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int hash[26] = {0};
	for(int i=0;i<str.length();i++)
	hash[str[i]-'a']++;
	int count=0,flag=0,even=0;
	for(int i=0;i<26;i++){
		if(hash[i]%2!=0){
			
			count++;
		}else
		even++;
		if(hash[i]==1){
			flag++;
		}
		
	}
//	cout<<"count value is: "<<count;
	if(count==0 || count==1)
	cout<<"YES";
	else if(flag==str.length())
	cout<<"NO";
	else
	cout<"NO";
}
