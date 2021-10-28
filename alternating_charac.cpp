#include<iostream>
#include<stdio.h>
using namespace std;
int alternating_charac(string str){
	int count=0;
	for(int i=0;i<str.length()-1;i++){
		if(str[i]==str[i+1])
		count++;
	}
	return count;
}

int main(){
	
	int test;
	cin>>test;
	string str;
	int k=0,res[test];
	for(int i=0;i<test;i++){
		cin>>str;
		res[k] = alternating_charac(str);
		k++;
	}
	
	//display
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";
}
