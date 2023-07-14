#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;


int main(){

int arr[]={1,2};
int n=sizeof(arr)/sizeof(arr[0]);
int size=pow(n,3);

int lhs[size];
int rhs[size];
int value;
int idx=0;


for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
          for(int k=0;k<n;k++){
               lhs[idx]=(arr[i]*arr[j])+arr[k];
               idx++;
          }
     }
}

for(int i=0;i<idx;i++){
     cout<<lhs[i]<<" ";
}

idx=0;
for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
          for(int k=0;k<n;k++){
               if(arr[i]!=0){
                 rhs[idx]=(arr[j]+arr[k])*arr[i];
                  idx++;
               }
          }
     }
}


cout<<endl;
for(int i=0;i<idx;i++){
     cout<<rhs[i]<<" ";
}











}