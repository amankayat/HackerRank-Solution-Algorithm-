#include<iostream>
#include<stdio.h>
#include<sstream>
using namespace std;
void cavity_map(string grid[],int n){
	//2 line ka 2
	//2 line ka 2,3
	//3 line ks 2,3
	 char a[n][n];

	for(int i=0;i<n;i++){
		string str = grid[i];
		for(int j=0;j<n;j++){
//			stringstream ss_j;
//			ss_j<<str[j];
//			int c;
//			ss_j>>c;
			a[i][j] = str[j];
			
		}
	}
	
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(i==0||j==0||i==n-1||j==n-1)
		cout<<a[i][j];
		else if(a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j] && a[i][j]>a[i-1][j])
		cout<<"X";
		else
		cout<<a[i][j];
	}
	cout<<endl;
}

//for(int i=0;i<n-2;i++){
//	for(int j=2;j<n;j++){
//		int c = a[i+1][j-1];
//		int l=1,loop = 2;
//		int count=0;
//		//check the C.......
//	while(loop>0){
//		for(int k=0;k<3;k++){
//			
//			if(loop==2 && c > a[k][l]){
//				count++;
//			}
//			if(loop==1 && c > a[l][k])
//			{
//				count++;
//			
//			}
//		}
//		loop--;
//	}
//	
//	if(count==4){
//		a[i+1][j-1] = 88;
//		
//	}
//	
//		
//	}
//}

//cout<<"display output....\n";
//	//display
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			
//				if(a[i][j]==88)
//					cout<<(char)a[i][j];
//				else
//					cout<<a[i][j];
//		}
//	
//		cout<<endl;
//	}
}

int main(){
	int n;
	cin>>n;
	string grid[n];
	for(int i=0;i<n;i++)
	cin>>grid[i];
	
	cavity_map(grid,n);
	return 0;
	
}
