#include<iostream>
#include<stdio.h>
using namespace std;
int palindrome_index(string str){
		int index=0;
		string new_str = "";
		string reverse = "";
		
		
		for(int i=str.length()-1;i>=0;i--)
		reverse+=str[i];
		
		//first check already palindrome or not
		if(reverse==str)
		return -1;
		
		//otherwise checking bit from either right or left
		else{
			reverse = "";
		
		
		
	for(int i=0,j=str.length()-1;i<str.length()/2;i++,j--){
		if(str[i]==str[j])
		continue;
		else{
			
			//check left....
			for(int k=i+1;k<=j;k++)
			new_str+=str[k];
			
//			cout<<new_str<<" ";
			for(int h=new_str.length()-1;h>=0;h--)
			reverse+=new_str[h];
			
			if(reverse==new_str){
				
					index = i;
			}
		
			else //store right bit in index
			index = j;
			
			break;
		}
		
	}
	
	return index;
}
}

int main(){
	int test;
	cin>>test;
	string str;
	int res[test];
	int k=0;
for(int i=0;i<test;i++){
		cin>>str;
		res[k]  = palindrome_index(str);
		k++;
	}
	
	//display
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";
}
