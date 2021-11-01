#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{	int min;
	vector<int> a;
	int size;
	cin>>size;
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	
	sort(a.begin(),a.end());
	
	//display
	for(int i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	
	min = abs(a[0] - a[1]);
	cout<<endl;
	for(int i = a.size()-1;i>=0;i--){
		if(abs(a[i]-a[i-1])<min)
		min = abs(a[i] - a[i-1]);
	}

	cout<<min;
//    int n,min=0,i,j;
//    cin>>n;
//    int arr[n];
//    for(i=0;i<n;i++)
//        cin>>arr[i];
//    min=abs(arr[0]-arr[1]);
//    if(min==0)
//    cout<<min;
//    else{
//    	
//
//    for(i=0;i<n;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            int res=abs((arr[i]-arr[j]));
//            if(min>res)
//                min=res;
//                
//            if(min==0)
//            break;
//        }
//        if(min==0)
//        break;
//    }
//    cout<<min;
//    	}
}
