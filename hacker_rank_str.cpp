#include<iostream>
#include<stdio.h>
using namespace std;
string hacker_rank(string str){
	string msg = "hackerrank";
	string new_string = "";
	int c=0,count=0;;
	for(int i=0;i<msg.length();i++){
		
		for(int j=c;j<str.length();j++){
		if(msg[i]==str[j])
		{
			count++;
			c=j+1;
			break;
			}	
		}
		
	}
	
	if(count==msg.length())
	return "YES";
	else
	return "NO";
	
}

int main(){
	int test;
	cin>>test;
	string str;

	string res[test];
	int k=0;
	for(int i=0;i<test;i++)
	{	cin>>str;
		res[k] = hacker_rank(str);
		k++;
	}
	
	//displey
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";
}
