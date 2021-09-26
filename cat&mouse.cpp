#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

string catAndMouse(int catA,int catB,int mouse){
	string str;
	int disA = abs(mouse -catA);
	int disB = abs(mouse -catB);
	if(disA==disB)
	str = "Mouse C";
	else if(disA>disB)
	str = "Cat B";
	else 
	str = "Cat A";

return str;
	
}

int main(){
	int q,x,y,z;
	cin>>q;
string results[100];
		

	for(int i=0;i<q;i++){
		cin>>x>>y>>z;
	 results[i] = catAndMouse(x,y,z);

	}
 for(int k=0;k<q;k++)
 cout<<results[k]<<"\n";
	
	
}
