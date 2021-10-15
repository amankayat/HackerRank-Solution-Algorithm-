#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> acm_team(vector<string> a){
    
    int count=0;
    vector<int> store;
int zero=0;
    vector<int> final;
    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size()-1;j++){
            string s1 = a[i];
            string s2 = a[j+1];
            
            for(int k=0;k<s1.length();k++){
                if(s1[k]=='1' && s2[k]=='1')
                count+=1;
                else if(s1[k]=='1' || s2[k]=='1')
                count+=1;
                else if(s1[k]=='0' && s2[k]=='0')
                zero++;
            }
            
           store.push_back(count);
            count=0;
        }
    }
    
     
     
    

    
    
    //find max
    int max = store[0];
    

    for(int i=0;i<store.size();i++){
        if(max<store[i])
        max = store[i];
    }

    int max_count=0;
    
        
        for(int i=0;i<store.size();i++){
            if(store[i]==max)
            max_count++;
          
        }
    
    final.push_back(max);
    if(max_count>0)
    final.push_back(max_count);
    else
    final.push_back(1);       
    return final;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> topics;
    vector<int> result;
    for(int i=0;i<n;i++){
        
        string x;
        cin>>x;
        topics.push_back(x);
        
    }
    result = acm_team(topics);
    
    for(int i=0;i<2;i++)
    cout<<result[i]<<"\n";
    
    
}
