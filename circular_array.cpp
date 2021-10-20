#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

vector<int> circularArrayRotation(vector<int> a,int rotation,vector<int> q){
 int size = a.size();
    rotation = rotation%a.size();
      for(int i=0;i<q.size();i++){
        int pos = (q[i]-rotation+size)%size;
        q[i] = a[pos];
    }

    return q;

}
int main(){
	int size,rotation,query;
	vector<int> a;
	vector<int> q; 
	vector<int> results;
	cin>>size>>rotation>>query;
	
	//array elements store
	for(int i=0;i<size;i++){
		int l;
		cin>>l;
		a.push_back(l);
	}

	
	//query elements store
	for(int i=0;i<query;i++){
		int l;
		cin>>l;
		q.push_back(l);
	}

	
//	calling function
  results = circularArrayRotation(a,rotation,q);
 

 for(int i=0;i<results.size();i++)
 cout<<results[i]<<"\n";
	
	
}
