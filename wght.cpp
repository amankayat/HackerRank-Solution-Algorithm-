#include<iostream>
using namespace std;

void wgt_string(string str,int q[],int n){
	int wgt[str.length()];
	int k=0;
	wgt[0] = str[0]- 'a' +1;
	
	for(int i=1;i<str.length();i++){
		if(str[i-1]==str[i]){
			wgt[i] = wgt[i-1] + (str[i]- 'a'+1); 
		}else{
			wgt[i] = str[i]- 'a'+1;
		}
	}
	//display
//	for(int i=0;i<str.length();i++)
//	cout<<wgt[i]<<" ";
	
	string res[n];
	int p=0;
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<str.length();j++){
			if(q[i] == wgt[j]){
				flag=1;
				res[p] = "Yes";
				p++;
				break;
			}
		}
		if(flag==0){
				res[p] = "No";
				p++;
		}
	}
	//display
	for(int i=0;i<p;i++)
	cout<<res[i]<<"\n";
}

int main(){
	string str;
	cin>>str;
	int n;
	cin>>n;
	int q[n];
	for(int i=0;i<n;i++)
	cin>>q[i];
	
	wgt_string(str,q,n);
}
