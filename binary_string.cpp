#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	
	char a[size];
	for(int i=0;i<size;i++)
	cin>>a[i];
	int count=0;
	for(int i=0;i<size-2;)
{
	if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0'){
		i+=3;
		count++;
	}else
	i++;
		}
		cout<<count;		

}
