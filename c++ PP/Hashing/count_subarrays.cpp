#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    int arr[]={1,4,-2,-1,0,2};
   int len=sizeof(arr)/sizeof(arr[0]);
  unordered_map<int,int> m;
  int psum=0;int cnt=0;
  m[0]=1; int k=2;


  for(int i=0;i<len;i++){
      psum+=arr[i];
      if(m.find(psum-k)!=m.end()){
          cnt+=m[psum-k];
      }
      m[psum]++;
  }

cout<<cnt;

}