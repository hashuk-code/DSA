#include<iostream>
#include<unordered_map>
using namespace std;

int main(){


    int arr[]={6, -1, 3, 1, 4};
    int len=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> m;
    m[0];
    int prefix_sum=0;

    for(int i=0;i<len;i++){

        prefix_sum+=arr[i];
        

        if(m.find(prefix_sum)!=m.end()){
            cout<<"True";
            return true;
        }
        else{
            m[prefix_sum];
        }

    }
   cout<<"False";
  return false;
}