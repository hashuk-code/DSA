#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{5,11,3,6,2,4};
    int ans=0;
    unordered_map<int,int> m;

    for(int i=0;i<nums.size();i++){
           if(m.find(nums[i])!=m.end()){
               continue;
           }
           else{

                 int ls=0; int rs=0;
                 if(m.find(nums[i]-1)!=m.end()){
                           ls=m[nums[i]-1];
                 }
                  if(m.find(nums[i]+1)!=m.end()){
                           rs=m[nums[i]+1];
                 }
                  
                  ans=max(ans,1+ls+rs);
                  m[nums[i]]=1+ls+rs;
                  m[nums[i]-ls]=1+ls+rs;
                  m[nums[i]+rs]=1+ls+rs;
           }


cout<<ans;
           }

}