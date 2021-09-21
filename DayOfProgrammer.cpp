#include<iostream>
#include<stdio.h>
#include<sstream>  
using namespace std;

string day_programmer(int y){
	string date="";
	string d,ye;
    if(y<1918){
//        julian calaender
    if(y%4==0){
//        leap year of julian calender
    stringstream ss;
    int day = 244;
    day = 256-day;
    ss<<day;
    ss>>d;
    stringstream s;
    s<<y;
    s>>ye;
    date = d+".09."+ye;

    }
    
    else{
    stringstream ss;
    int day=243;
    day=256-day;
    ss<<day;
    ss>>d;
    stringstream s;
    s<<y;
    s>>ye;
    date = d+".09."+ye;
	}
    
    return date;
    }
    else
  {
  	
    if(y>=1918  && y<=2700){
//        Gregorian Calender
 
    
    if(y%400==0 || (y%4==0 && y%100 != 0)){
//        leap year of gregorian calender
    stringstream ss;
    int day = 244;
    day = 256-day;
    ss<<day;
    ss>>d;
    stringstream s;
    s<<y;
    s>>ye;
    date = d+".09."+ye;

    
    }else {
    	 int day;
    
    	
    stringstream ss;
    day=243;
    day=256-day;
    if(y==1918){
    	day+=13;
    ss<<day;
    ss>>d;
    stringstream s;
    s<<y;
    s>>ye;
    date = d+".09."+ye;
    	
	}else{
	ss<<day;
    ss>>d;
    stringstream s;
    s<<y;
    s>>ye;
    date = d+".09."+ye;
	}
   
    
	}
	
	
    
    
     return date;
    }
    else
    return "0";
   
    
  }
    
    
    
}

int main(){
    
    int year;
    cin>>year;
    string result = day_programmer(year);
    cout<<result;
}
