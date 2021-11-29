#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test>0){


	int num;
	cin>>num;
	int k=0,p=0;
	vector<pair<int,long long int> > a(33);
	for(int i=0;i<=31;i++){
		a[i].first = 1;
		a[i].second  =pow(2,i);
		
		
	}
	//display
	long long int s=0;
		for(int i=0;i<=31;i++){
	cout<<a[i].first<<" "<<a[i].second<<"\n";
			s+=a[i].second;
		}
	cout<<s;
	
	// while(num>0){
	// 	if(num%2!=0)
	// 	{
	// 		a[k].first = 0;
	// 		k++;
	// 	}else
	// 	{
	// 		a[k].first = 1;
	// 		k++;
	// 	}
	// 	num=num/2;
	// }
	// 	for(int i=0;i<=31;i++)
	// cout<<a[i].first<<" "<<a[i].second<<"\n";
	// long long int sum=0;	
	// for(int i=0;i<=31;i++){
	// 	if(a[i].first==1){

	// 		sum+=a[i].second;
	// 	}
	// }
	// cout<<sum<<endl;
	test--;
	}
}