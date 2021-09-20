#include<iostream>
#include<stdio.h>
using namespace std;

string kangaaroo(int x1,int v1,int x2, int v2){
	if(x1==x2)
	return "YES";
	if((x2>x1 && v2>v1) || (x1>x2 && v1>v2))
	return "NO";
	else{

	
	while(x1>x2){
		x1+=v1;
		x2+=v2;
	}
	while(x2>x1){
		x1+=v1;
		x2+=v2;
	}
	if(x1==x2)
	return "YES";
	else
	return "NO";
		}
}
int main(){
	int x1,v1,x2,v2;
	cin>>x1>>v1;
	cin>>x2>>v2;
	string result = kangaaroo(x1,v1,x2,v2);
	cout<<result;
	
}
