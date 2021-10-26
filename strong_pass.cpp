
#include<iostream>
using namespace std;
int main() {


   int size;
   int count=0;
   cin>>size;
   char a[size];
   for(int i=0;i<size;i++)
   cin>>a[i];
   
   int hash[4] = {0};
   
   //1. digit 2. lowercase 3. upercase 4. special
      for(int k=0;k<=9;k++){
        for(int l=0;l<size;l++)
            if(a[l]-'0'==k)
            hash[0]++;
        }
        
//        lowercase
    for(int i=65;i<=90;i++){
        for(int j=0;j<size;j++){
        if((int)a[j]==i)
        hash[1]++;
        
        if((int)a[j]==i+32)
        hash[2]++;    
        
    }
    }
        
   //special
       for(int i=0;i<size;i++){
            if(a[i]=='!' || a[i]=='@' || a[i]=='#' || a[i]=='$'
            ||a[i]=='%'||a[i]=='^'||a[i]=='&'||a[i]=='*'||a[i]=='('
            ||a[i]==')'||a[i]=='-'||a[i]=='+')
            hash[3]++;
        }
        
//checking condition

        int c=0;
        for(int i=0;i<4;i++){
            if(hash[i]==0)
            c++;
        }
        if(c+size>=6)
        cout<<c;
        else if(c+size !=6 ){
            
            while((c+size)!=6)
            c++;
            cout<<c;
        }
        else if(size>=6 && hash[0]!=0 && hash[1]!=0 && hash[2]!=0 &&
        hash[3]!=0){
        
        cout<<"0";
        }
        else{
        for(int i=0;i<4;i++){
            if(hash[i]==0)
            count++;
        }
            
            cout<<count;
        }
        
        
        
}

