#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    float l;
    int i,j,r,c;
    getline(cin,s);
    
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    l=sqrt(s.length());
    
    if((l*l) == ((int)l)*((int)l)){
        r=l;
        c=l;
    }
    else{
        r=sqrt(s.length());
        c=r+1;
    }
    
    for(j=0;j<c;j++){
        i=j;
        while(i<s.length()){
            cout<<s[i];
            i+=c;
        }
        cout<<" ";
    }
}
