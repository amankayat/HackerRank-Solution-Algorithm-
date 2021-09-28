#include<iostream>
#include<stdio.h>
using namespace std;
int pdf_designer(int h[26],string str)
{    int hash[26]={0};
    int k=0; 
    
    for(int i=0;i<str.length();i++){
     hash[k]=h[str[i]-'a'];
     k++;
    }
    
   
    
    int max = hash[0];
    for(int i=0;i<26;i++)
    {
        if(max<hash[i])
        max = hash[i];
        else {
        
        }
    }

    return max*str.length();
}
int main(){
    int h[26];
    string str ;
    for(int i=0;i<26;i++)
    cin>>h[i];
    
    cin>>str;
    
    int result = pdf_designer(h,str);
    cout<<result;
}
