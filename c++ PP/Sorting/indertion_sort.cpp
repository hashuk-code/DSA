#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={3,5,3,2,1,1,6,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int temp;
    int j;
    for(int i=1;i<len;i++){
         j=i;
       while(j!=0){
             if(arr[j]<arr[j-1]){
                 temp=arr[j];
                 arr[j]=arr[j-1];
                 arr[j-1]=temp;
                 j--;
             }
             else{
                 break;
             }
            
             }
             
    }

    for(int k=0;k<len;k++){
        cout<<arr[k]<<" ";
    }
}