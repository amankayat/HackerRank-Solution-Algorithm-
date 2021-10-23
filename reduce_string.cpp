#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    string str ;
    cin>>str;
    int count=0,c=2;
    string new_str ="";
    do{
	
        
        new_str = "";
        count=0;
	
    for(int i=0;i<str.length();){
        if(str[i]==str[i+1])
        {
            i+=2;
            
        }else{
        new_str += str[i];
        i++;    
        }
        }
        if(new_str=="")
        break;
       
        else{
        for(int j=0;j<new_str.length()-1;j++)
        if(new_str[j]!=new_str[j+1])
        count++;
        
        if(count+1==new_str.length())
        break;	
		}
        
     str = new_str;   
        
    }while(count!=new_str.length());
        
        if(new_str == "")
        cout<<"Empty String";
        else
        cout<<new_str;
    

     }

