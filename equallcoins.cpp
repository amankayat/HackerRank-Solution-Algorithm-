#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long one,two,i=0;
	int test,n;
	cin>>test;
	n=test;
	string res[test];
	while(test>0)
	{
	    cin>>one>>two;
	    long first = one*1;
	    long second = two*2;
	    long sum = first+second;
	    if(sum%2==0)
	    	res[i]="YES";
	   else
	   		res[i]="NO";
	   i++;
	   test--;
	}
	for(int k=0;k<i;k++)
		cout<<res[k]<<endl;
	return 0;
}
