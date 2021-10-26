#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int count=0;
	for( int i=0;i<str.length();i++){
		for(int j=65;j<=90;j++){
			if((int)str[i]==j)
			count++;
		}
	}
	cout<<count+1;
}
