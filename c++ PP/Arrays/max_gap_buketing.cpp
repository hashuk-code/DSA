#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int  main(){
int n;
cin>>n;
int doors_state[n+1];
for(int k=1;k<=n;k++){
    doors_state[k]=0;
}
int times;

cout<<endl;
/////////////////////////////////////////////
for(int i=1;i<=n;i++){

  for(int j=i;j<=n;j+=i){
      if(doors_state[j]==0){
          doors_state[j]=1;
          
          
      }else{
          doors_state[j]=0;
          
      }
  }

}
///////////////////////////////////////////
int count=0;
for(int k=1;k<=n;k++){
    if(doors_state[k]==1){
        count++;
    }
    cout<<doors_state[k]<<" ";
}
cout<<endl;
cout<<count;

}