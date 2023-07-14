#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={2,1,4,-3,-2,3,-1,-2,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> m;
    int psum=0;
    m[0]=-1;
    int longest_subarray=0;

    for(int i=0;i<len;i++){
        psum+=arr[i];

        if(m.find(psum)!=m.end()){
              longest_subarray=max(longest_subarray,i-m[psum]);
              
        }

        else{
            m.insert({psum,i});
        }
    }

cout<<longest_subarray;
}