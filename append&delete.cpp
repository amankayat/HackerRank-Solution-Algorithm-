#include<iostream>
#include<stdio.h>
using namespace std;
string append_delete(string s1,string s2,int k){
	string str ="";
	int count=0,l=0;
	string s_ar[100];
	int len1 = s1.length();
	int len2 = s2.length();
	if(len2>len1)
	str = "No";
	if(s1==s2)
	str= "Yes";
	for(int i=0;i<s1.length();i++){
		for(int j=0;j<s2.length();j++){
			if(s1[i]==s2[j])
			l++;	
		
		}
		if(l==len2)
		str = "Yes";
		if(s1[i]==s2[i]){
			count++;
			s_ar[i]=s1[i];
			
			
		}else{
			int a= len1-count;
			int c=len2-count;
			if((a+c)<=k){
				str = "Yes";
			}else
			str = "No";
		}
	}
	return str;
}
int main(){
	string str1,str2;
	int k;
	cin>>str1>>str2;
	cin>>k;
	string result = append_delete(str1,str2,k);
	cout<<result;
	
}
