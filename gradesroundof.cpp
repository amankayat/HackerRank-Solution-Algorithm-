#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

int *roundoffgrade(int a[100],int n){
    static int ar[100];
    for(int i=0;i<n;i++){
        if(a[i]>37){
    
        if((a[i]%5)==3){
            int x= a[i]%5;
            a[i]+=(x-1);
        }else if((a[i]%5)==4){
            a[i]+=1;
        }
    }
    }
for(int i=0;i<n;i++)
        ar[i]=a[i];
        
return ar;
}


int main(){
    int n,a[100];
    int *result;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    result = roundoffgrade(a,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<"\n";
    }
    
}
