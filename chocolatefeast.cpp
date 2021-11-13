#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	int res[test];
	int k=0;
	while(test>0){
		int n,c,w;
		int sum=0;
		cin>>n>>c>>w;
		 int choco= n/c;
		 sum+=choco;
		int rem =0;
		 while(choco>=w){
		 	choco-=w;
		 	sum++;
		 	choco++;
		 	
		 	
		 }
		 
		 res[k] = sum;
		 k++;
		test--;
	}
	
	//display
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";  
}
