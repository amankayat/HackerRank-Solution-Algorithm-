#include<iostream>
using namespace std;
string sherlock_array(int a[],int n){
	int sum=0;
	if(n==1)
	return "YES";
	int x,y;
	for(int i=0;i<n;i++)
	sum+=a[i];
	
	x = 0;
	int ct=0;
	for(int i=0;i<n;i++){
		y=a[i];
		if(2*x == sum-y)
		return "YES";
		else
		ct++;
		x+=y;
	}
	if(ct==n)
	return "NO";
	else
	return "";
}

int main(){
	int test;
	cin>>test;
	int k=0;
	string res[test];
	while(test>0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		res[k] = sherlock_array(a,n);
		k++;
		test--;
	}
	
	//display
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";
}
