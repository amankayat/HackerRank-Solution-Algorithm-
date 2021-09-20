#include<iostream>
#include<stdio.h>
#include <cstdlib>
using namespace std;
using std::cout; 
using std::cin;
using std::endl; 
using std::string;

int diagonal_diff(int a[50][50],int n){
	int sum1=0;
	int sum2=0;
	int diff =0;
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
					sum1+=a[i][j];
			}
		if ((i + j) == (n - 1)){
		        
                sum2 += a[i][j];
        }
	
		}
	}


	diff = abs(sum1-sum2);
	return diff;
}
int main(){
	int rc;
	int ar[50][50];
	cin>>rc;
	for(int i=0;i<rc;i++){
		for(int j=0;j<rc;j++){
			cin>>ar[i][j];
		}
	}
	cout<<"our input array is: \n";
	for(int i=0;i<rc;i++){
		for(int j=0;j<rc;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<"\n";
	}
	int result =  diagonal_diff(ar,rc);
	cout<<"difference is : "<<result;
}
