#include<iostream>
#include<stdio.h>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;
int count=0;
vector<int> kaprekar_numbers(int p,int q){
    string str,str_c;
    int count=0;
    vector<int> store;
    for(int i=p;i<=q;i++){
        
        int len_str = 0,len_str2=0;
        string str = "",str2 ="";
        long int sq =  pow(i,2);
        stringstream ss;
        ss<<i;
        ss>>str;
        len_str = str.length();
        
        stringstream ss1;
        ss1<<sq;
        ss1>>str2;
        len_str2=str2.length();
        
        if(len_str2==2*len_str || len_str2==(2*len_str)-1){
            string r = str2.substr(len_str2-len_str,len_str);
            string l = str2.substr(0,len_str2-len_str);

            long in_r=0,in_l=0;
                stringstream s;
                s<<r;
                s>>in_r;
                stringstream s1;
                s1<<l;
                s1>>in_l;
                if(in_r + in_l == i){
                    store.push_back(i);
                    count++;
                }
                
    
        } 
        
                
        
    }
   
    return store;
}

int main(){
    int p,q;
    cin>>p>>q;
    vector<int> res;
    
    res = kaprekar_numbers(p,q);
    
    //display
    if(res.size()==0)
    cout<<"INVALID RANGE";
    else
    for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
 
}
