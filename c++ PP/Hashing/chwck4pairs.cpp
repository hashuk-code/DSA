#include<iostream>
#include<unordered_map>
using namespace std;

bool pairExists(int *arr,int len,int pair_sum,unordered_map<int,int> m){

      for(int i=0;i<len;i++){
         int element=pair_sum-arr[i];
         if(m.find(element)!=m.end()){
               return true;
         }
         else{
               m[arr[i]];
         }
      }
               return false;
               
}


int main(){

int arr[]={5,2,-3,7,11};
int len=sizeof(arr)/sizeof(arr[0]);
int pair_sum=16;
unordered_map<int,int> m;
cout<<pairExists(arr,len,pair_sum,m);


}
