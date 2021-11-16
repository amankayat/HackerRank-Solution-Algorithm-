#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    int temp[n];
        for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            sum+=a[i][j];
        }
        temp[i] = sum;
        sum=0;
    }
    int copy_temp[n];
    for(int i=0;i<n;i++)
    copy_temp[i] = temp[i];
    
    
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(temp[j] < temp[j-1]){
                int var = temp[j];
                temp[j] = temp[j-1];
                temp[j-1] = var;
            }
        }
    }


    
    int index[n];
    int l=0;
for(int i=0;i<n;i++)
{    for(int j=0;j<n;j++){
    
    if(temp[i]==copy_temp[j]){
            index[l] = j+1;
        l++;
        copy_temp[j] = -1;
        break;
    }

}
    
    

}
//display
for(int i=0;i<l;i++)
cout<<index[i]<<" ";
}
