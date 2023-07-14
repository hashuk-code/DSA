#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    long long arr[]={13,16,17,14,11,12};
        int len=sizeof(arr)/sizeof(arr[0]);
    unordered_map<long long,long long> m;
    long long minm=__LONG_LONG_MAX__;

    for(int i=0;i<len;i++){
        m[arr[i]];
        minm=min(minm,arr[i]);
        
    }

    for(int i=minm;i<minm+len;i++){
        if(m.find(i)==m.end()){
            cout<<"False";
            return false;
        }
    }
    cout<<"True";
    return true;


      
}