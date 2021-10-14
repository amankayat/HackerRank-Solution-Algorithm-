#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int jumping_the_clouds(vector<int> a){
	int count=0;
	for(int i=0;i<a.size();){
		if(a[i+2]!=1){
			count++;
			if(i+2==a.size()-1)
			return count;
			else
			i+=2;
		}else{
			i++;
			count++;
		}
	}
	return count;
}	
int main(){
	int size;
	cin>>size;
	vector<int> a;
	for(int i=0;i<size;i++)
	{int x;
	cin>>x;
	a.push_back(x);
		
	}
	
	int res = jumping_the_clouds(a);
	cout<<res;
}
