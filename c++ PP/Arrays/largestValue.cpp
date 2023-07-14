#include <iostream>
#include <bits/stdc++.h>
using namespace std;

////////Largest value product such that ith index<j<k;
int greatest_value(int* arr,int len,int mid,int first,int third,int q,int p,int r){
  int mid_value=INT_MIN;
  int first_value=INT_MIN;
  int third_value=INT_MIN;
  int mid_index;

for(int i=1;i<len-1;i++){
    mid=q*arr[i];
    if(mid>mid_value){
         mid_index=i;
    }
   mid_value=max(mid_value,mid);
   
}

for(int i=0;i<mid_index;i++){
     first=p*arr[i];
     first_value=max(first_value,first);
} 

for(int i=mid_index+1;i<len;i++){
     third=r*arr[i];
     third_value=max(third_value,third);
}

return first_value+mid_value+third_value;

}

     

int main(){
 

 int arr[]={-1,-2,-3,0,-5};
 int len=sizeof(arr)/sizeof(arr[0]);
 int p,q,r;
 p=1;q=2;r=-3;
 int mid,first,third;

cout<<greatest_value(arr,len,mid,first,third,q,p,r);
 
 
   
}