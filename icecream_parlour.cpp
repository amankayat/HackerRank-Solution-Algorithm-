#include<iostream>
#include<vector>
using namespace std;
void icecream_parlour(vector<int> ar,int k,int* index1,int* index2){
	int flag=0;
	for(int i=0;i<ar.size();i++){
		for(int j=i+1;j<ar.size();j++){
			if(ar[i]+ar[j]==k){
				flag=1;
				*index1 = i+1;
				*index2 = j+1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	
}

int main(){
	int test;
	cin>>test;
	
	while(test>0){
		int value,n,index1,index2;
		cin>>value>>n;
		vector<int> a;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a.push_back(x);
		}
		
		icecream_parlour(a,value,&index1,&index2);
		cout<<index1<<" "<<index2;
		cout<<endl;
	
		test--;
	}

	
}
