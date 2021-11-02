#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int size,k,value=0;
    cin>>size;
    char ch[size];
    for(int i=0;i<size;i++)
    cin>>ch[i];
    cin>>k;
    int store;
    k=k%26;
             
    for(int i=0;i<size;i++){
    
			
		
       store = ch[i];
       if(store>=97 && store<=122){
       	store = store+k;
       	if(store>122)
       	cout<<(char)(store-26);
       	else
       	cout<<(char)store;
	   } 
     
		else if(store>=65 && store<=90){
		store = store+k;
       	if(store>90)
       	cout<<(char)(store-26);
       	else
       	cout<<(char)store;
		}	    
		else
		cout<<(char)store;
   
    }
   
   
    
    
}

