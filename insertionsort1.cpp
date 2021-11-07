#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int key = a[n-1];
	for(int i=n-2;i>=0;i--){
		if(key<a[i]){
			a[i+1] = a[i];
		
			
		}
		else{
			a[i+1] =key;
			break;
		}
		//display
		for(int k=0;k<n;k++)
		cout<<a[k]<<" ";
		cout<<endl;
		
		if(i==0){
			a[i] =key;
		}
	}
		for(int k=0;k<n;k++)
		cout<<a[k]<<" ";
}
