#include<iostream>
#include<stdio.h>
using namespace std;
long taumBday(long int b,long int w,long int bc,long int wc,long int z) {
if((wc>bc+z)){
        return ((b+w)*bc) + (w*z);
    }
    else if(bc>wc+z){
        return ((b+w)*wc) + (b*z);
    }
    else{
        return (b*bc)+(w*wc);
    }
}


int main(){
	int test;
	cin>>test;
	int k=0;
	long int b,w,bc,wc,z;
	long int res[test];
	for(int i=0;i<test;i++){
		cin>>b>>w>>bc>>wc>>z;
		res[k] = taum_bday(b,w,bc,wc,z);
		k++;
	}
	//display
	for(int i=0;i<k;i++)
	cout<<res[i]<<"\n";
}
