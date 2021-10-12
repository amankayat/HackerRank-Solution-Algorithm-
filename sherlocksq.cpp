#include<iostream>
#include<stdio.h>
using namespace std;
int sherlockSquares(int low,int high){
	int count=0;
	int i=1;
	int sq=1;
while(sq<=high){

		 sq = i*i;
		i++;
		if(sq>=low && sq<=high)
		count++;
	}
	return count;
}
int main(){
	int test;
	int k=0,result[100];
	cin>>test;
	int low ,high;
	for(int i=0;i<test;i++){
	cin>>low>>high;
	result[k] = sherlockSquares(low,high);
	k++;
	}
	for(int i=0;i<test;i++)
	cout<<result[i]<<"\n";
}
