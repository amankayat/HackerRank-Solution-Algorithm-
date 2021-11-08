#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    int flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    //insertionsort
    for(int i=1;i<n;i++){
        for(int j=i;j> 0;j--){
        	
            if(a[j] < a[j-1]){
            	flag=1;
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                count++;
            }
            
            
        }
       
        

    }
    if(count==0)
    cout<<count;
    else
    cout<<count;
    
    cout<<endl;
    
    

}
