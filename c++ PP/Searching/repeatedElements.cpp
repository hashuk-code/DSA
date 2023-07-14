#include <iostream>
using namespace std;

int repeated_element(int * arr,int len){
       int low=0;
       int high=len-1;
       int mid;
      while(low<=high){
          mid=(low+high)/2;
          
          if(arr[mid]==arr[mid-1]){
              return mid;
          }
          else if(arr[mid]==mid+1){
              low=mid+1;
          }
          else{
              high=mid-1;
          }

      }
      return -1;
}

int main(){
int arr[]={1,2,2,3,4,5};
int len=sizeof(arr)/sizeof(arr[0]);
cout<<repeated_element(arr,len);


}