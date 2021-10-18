#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;
int beautiful_triplets(vector<int> a,int d ){
	int count=0;
	for(int i=0;i<a.size();i++){
		for(int j=i;j<a.size()-1;j++){
			if(abs(a[i]-a[j+1])==d){
				
			for(int k=j+1;k<a.size()-1;k++){
				if(abs(a[j+1]-a[k+1])==d){
				
					count++;
				}
				
			}
			}
		}
	}

	return count;
	
}
int main(){
	int n,d;
	cin>>n>>d;
	vector<int> a;
	for(int i=0;i<n;i++)
	{int x;
	cin>>x;
	a.push_back(x);
		
	}
	
	int result = beautiful_triplets(a,d);
	cout<<result;
}
