#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	//insertionsort
	for(int i=1;i<n;i++){
		for(int j=i;j> 0;j--){
			if(a[j] < a[j-1]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
			else
			break;
		}
	//display
	for(int k=0;k<n;k++)
	cout<<a[k]<<" ";
	cout<<endl;

	}
	

}
