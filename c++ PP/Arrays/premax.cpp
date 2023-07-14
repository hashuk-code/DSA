#include<iostream>
using namespace std;

int main(){

int arr[6]={2,3,1,4,5,1};
int q;
cin>>q;

for(int i=1;i<6;i++){
    arr[i]+=arr[i-1];
}



for(int i=1;i<=q;i++){
    int l,r;
    cin>>l>>r;
  if(l==0){
    cout<<arr[r];
     continue;
  }  
  int sum=arr[r]-arr[l-1];
  cout<<sum<<endl;
}



}