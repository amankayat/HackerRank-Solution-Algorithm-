#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
string funny_string(string str){

	string reverse = "";
	int k=0;
	int diff[str.length()];
	int diff_rev[str.length()];
	int c=0;
	for(int i=str.length()-1;i>=0;i--){
		reverse+=str[i];
	}
	
	//checking absolute difference of simple string
	for(int i=0;i<str.length()-1;i++){
		diff[k] = abs(str[i] - str[i+1]);
		k++;
	}
	

	//checking absolute difference of reverse string
		for(int i=0;i<reverse.length()-1;i++){
		diff_rev[c] = abs(reverse[i] - reverse[i+1]);
		c++;
	}

	
int count=0;
for(int i=0;i<k;i++){
	if(diff[i] == diff_rev[i])
	count++;
}

if(count==k)
return "Funny";
else
return "Not Funny";

}

int main()
{	int test;
    cin>>test;
	string str;
	string res[test];
	int k=0;
	for(int i=0;i<test;i++){
		cin>>str;
		res[k] = funny_string(str);
		k++;
	}
	
	//display
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";
}
