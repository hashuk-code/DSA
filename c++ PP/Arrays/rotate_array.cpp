#include <iostream>
#include <vector>
using namespace std;

void rotate(int* arr,int k,int len){
     if(k>len){
          k=k%len;
     }
    int temp;
 int low=len-k;
 int high=len-1;
 while(low<high){
           temp=arr[low];
          arr[low]=arr[high];
          arr[high]=temp;
          low++;
          high--;
 }

 int low1=0;
 int high1=(len-k)-1;
 while(low1<high1){
        temp=arr[low1];
          arr[low1]=arr[high1];
          arr[high1]=temp;
          low1++;
          high1--;
 }

int low2=0;
int high2=len-1;
 while(low2<high2){
        temp=arr[low2];
          arr[low2]=arr[high2];
          arr[high2]=temp;
          low2++;
          high2--;
 }

 for(int i=0;i<len;i++){
      cout<<arr[i]<<" ";
 }

  
}

  
int main(){
int arr[]={1,5,2,4,3};
int len=sizeof(arr)/sizeof(arr[0]);
int k=3;
rotate(arr,k,len);


}