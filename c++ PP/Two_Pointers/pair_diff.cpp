#include <iostream>
using namespace std;



int main(){
    int arr[]={2,5,8,10};
   int len=sizeof(arr)/sizeof(arr[0]);
   int diff=2;
    int i=0,j=1;
   while(i<j){
          if(j>len-1){
              cout<<"No such elements found"<<endl;
              break;
          }
          if(arr[j]-arr[i]==diff){
              cout<<j<<"->"<<arr[j];
              cout<<endl;
              cout<<i<<"->"<<arr[i];
              break;
          }
          else if (arr[j]-arr[i]<diff){
              j++;

          }
          else{
              i++;
              if(i==j){
                  j++;
              }
          }
   }

}