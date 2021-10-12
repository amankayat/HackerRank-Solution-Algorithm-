#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> cutthesticks(vector<int> a){
int zero =0;
   
vector<int> store;
    

while(zero<a.size()){
	
        store.push_back( a.size() -zero);

      
    //find min
    int min = 1001;
    for(int i=0;i<a.size();i++){
        if(a[i]>0 && a[i]<min){
            min = a[i];
        }
    }
    //
    for(int i=0;i<a.size();i++){
        a[i] = a[i]-min;
            if(a[i]==0){
            zero++;
        }
    }
 

    }
    return store;

}
int main(){
	int n,count=0;
	cin>>n;
 vector<int> a;
 vector<int> result;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	
		
	result = cutthesticks(a);
	

		
	//print the array
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<"\n";
	
	}
	
}
