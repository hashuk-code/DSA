#include<iostream>
using namespace std;

int calculate(int *arr,int len,int r,int unit){
  if(len==0){
      return -1;
  }

    int total_unit=r*unit;
    int sum_unit=0;
    for(int i=0;i<=len;i++){
        sum_unit=sum_unit + arr[i];
        if(sum_unit>=total_unit){
            return i+1;
        }

    }
    return 0;

}
int main(){

int arr[]={2,3,4,5};
int len=sizeof(arr)/sizeof(arr[0]);
int r,unit;
cin>>r;
cin>>unit;

cout<<calculate(arr,len,r,unit);




}