#include<iostream>
#include<stdio.h>
using namespace std;
int halloween_sale(int p,int d,int m,int s){
	int sum=0;
	int count=1;
	while(1){
		
		sum = sum+p;
		
		if(sum<=s){
			count++;
			if(p-d>=m)
			p=p-d;
			else
			p=m;
			
		}
		else
		break;
		
		
	}
	return count;
}
int main(){
	int p,d,m,s;
	cin>>p>>d>>m>>s;
	int res = halloween_sale(p,d,m,s);
	cout<<res;
}
