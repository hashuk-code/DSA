#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;


int main(){
    int arr[]={5,1,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    int k=7;

    sort(arr, arr + len, greater<int>());


    int i=1,len_subarray=0,sum=arr[0];
    while(true){

        if(sum>=k){
             len_subarray++;
             break;
        }else {
              sum=sum+arr[i];
              len_subarray++;
              i++;
              if(i==len){
                  if(sum<k){
                         len_subarray=0;
                         break;
                  }
              }
        }
    }

    cout<<len_subarray;


}