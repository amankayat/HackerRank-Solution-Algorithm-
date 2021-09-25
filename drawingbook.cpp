#include<iostream>
#include<stdio.h>
using namespace std;
int drawing_book(int n,int p){
	//when starting from front
	int front = p/2;
	int last = (n/2) - front;
	int found = min(front,last);
	return found;
}
int main(){
	int n,p;
	cin>>n>>p;
	int results = drawing_book(n,p);
	cout<<results;
	}
