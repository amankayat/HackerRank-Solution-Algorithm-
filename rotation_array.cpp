#include<iostream>
using namespace std;
int main(){
	int n;
	int d;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int temp[n];
	int k=0;
	//left rotation
	for(int i=d;i<n;i++){
		temp[k] = a[i];
		k++;
			}
			for(int i=0;i<d;i++)
			{
				temp[k] = a[i];
				k++;
			}
	//display
	for(int i=0;i<k;i++)
	cout<<temp[i]<<" ";
}
