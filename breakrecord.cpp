#include<iostream>
#include<stdio.h>
using namespace std;
int *break_record(int scores[1000],int games){
    int max=scores[0];
    int min = scores[0];
    int max_c =0,min_c=0;
    static int c[10];
    for(int i=0;i<games;i++){
        if(scores[i]>max){
            max=scores[i];
            max_c++;
        }else if(scores[i]<min){
            min = scores[i];
            min_c++;
        }
    }
    c[0]=max_c;
    c[1]=min_c;
    return c;
}

int main(){
    int games,scores[1000];
    cin>>games;
    for(int i=0;i<games;i++)
    cin>>scores[i];
    
    int *results = break_record(scores,games);
    for(int i=0;i<2;i++)
        cout<<results[i]<<" ";
}
