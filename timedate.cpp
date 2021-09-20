#include<iostream>
#include<stdio.h>
#include <cstdlib>
#include <sstream>
#include <string> 
using namespace std;
using std::string;

string timeconversion(string s){
	string sub = s.substr(8,9);
 if(sub=="pm"||sub=="PM"){
 	 
 	string up;
 	int update_hour;
 	string hour  = s.substr(0,2);
 	if(hour=="12"){
 		s.erase(8,9);
 	return s;
	 }
 	else{
 		update_hour= atoi(hour.c_str());
 	update_hour+=12;
 	
 	 stringstream ss;  
  	ss << update_hour;  
  	ss >> up;  
 
 	
 	s.replace(0,2,up);
 	s.erase(8,9);
 	return s;
 	
	 }
 }else{
 	string hour  = s.substr(0,2);
 	if(hour=="12"){
 		s.replace(0,2,"00");
	 }
 	 s.erase(8,9);
 	 return s;
 }
}
int main(){
	
	string time="";
	cin>>time;
	string result = timeconversion(time);
	cout<<result;
	
}
