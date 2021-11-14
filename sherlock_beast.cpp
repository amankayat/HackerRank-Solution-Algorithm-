#include<iostream>
using namespace std;

void getelement(int *n,int *x){
    while(*n>0){
        if(*n%3==0)
        break;
        else{
        *x += 5;
        *n-=5;
                
        }
    
        
    }

}

int main(){
    int test;
    cin>>test;
    while(test>0){
        int n;
        cin>>n;
        if(n<3){
            cout<<"-1"<<endl;
        }
       else if(n==4 || n==7){
           cout<<"-1"<<endl;
       }
        else{
            int x=0;
            getelement(&n,&x);
             n = n/3;
            for(int i=0;i<n;i++)
            cout<<"555";
            x = x/5;
            for(int i=0;i<x;i++)
            cout<<"33333";
            cout<<endl;
            
        }
        
        test--;
    }
}
