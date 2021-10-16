#include<iostream>
#include<stdio.h>
using namespace std;
int* permutation_equation(int a[]){
	static int ar[10] ={0};
		int count=0,l=0;
		//count the size of array
		for(int i=1;a[i]!='\0'; ++i)
		count+=1;
		
	for(int i=1;i<=count;i++){
	
	for(int j=1;j<=count;j++){
		if(a[j]==i){
			for(int k=1;k<=count;k++){
				if(a[k]==j){
					if(a[a[k]]==i)
					ar[l] = k;
					l++;
				}
			}
		}
	}

}
	return ar;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	int * result;
	result = permutation_equation(a);
	
	for(int i=0;i<n;i++)
	cout<<result[i]<<"\n";
	
}
