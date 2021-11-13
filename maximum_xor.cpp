#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
	int l,r;
	cin>>l>>r;
	vector<int> store;
	int k=0;
	for(int i=l;i<=r;i++){
		for(int j=i;j<=r;j++){
			store.push_back((i^j));
		}
	}
	
	//find max;
	int max = INT_MIN;
	for(int i=0;i<store.size();i++){
		if(store[i]>max)
		max = store[i];
	}
	cout<<max;
}
