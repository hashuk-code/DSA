#include <iostream>
using namespace std;

int water_collected(int *arr,int n){
    int prefix_max[n];
    int suffix_max[n];
    
    prefix_max[0]=arr[0];
    suffix_max[n-1]=arr[n-1];
    int result=0;

    for(int i=1;i<n;i++){
        if(arr[i]>prefix_max[i-1]){
            prefix_max[i]=arr[i];
        }else{
            prefix_max[i]=prefix_max[i-1];
        }
    }


    for(int i=n-2;i>=0;i--){
        if(arr[i]>suffix_max[i+1]){
            suffix_max[i]=arr[i];
        }else{
            suffix_max[i]=suffix_max[i+1];
        }
    }

for(int i=1;i<n-1;i++){
    if(arr[i]<prefix_max[i-1] && arr[i]<suffix_max[i+1]){
          int deciding_height=min(prefix_max[i-1],suffix_max[i+1]);
          int water_on_top=deciding_height-arr[i];
          result+=water_on_top;
    }
}
   
  return result;
}

int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<water_collected(arr,n);
}