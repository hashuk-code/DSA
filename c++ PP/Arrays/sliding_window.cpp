#include <iostream>
using namespace std;


void sliding_window(int *arr,int n,int k){
      int sum=0;
     for(int i=0;i<k;i++){
            sum+=arr[i];
     }

     for(int j=k;j<n;j++){
        cout<<sum<<endl;
        sum+=arr[j];
        sum-=arr[j-k];
     }
     cout<<sum<<endl;     
}

int main(){
    int arr[6]={2,1,4,6,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    sliding_window(arr,n,k);
}