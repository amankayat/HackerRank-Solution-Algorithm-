#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int love_the_letter(string str){
	int count=0;
//			
	for(int i=0,j=str.length()-1;i<str.length()/2;
	i++,j--){

	count = count+ abs(str[i] - str[j]);
}
		return count;


}

int main(){
	int test;
	cin>>test;
	string str;
	int res[test];
	int k=0;
	for(int i=0;i<test;i++){
		cin>>str;
		res[k] = love_the_letter(str);
		k++;
	}
	
	//display
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";
}
