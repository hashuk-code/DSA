#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

bool cmp(pair<int,int>v1,pair<int,int>v2){
    
        if(v1.first<v2.first){
            return v1.first<v2.first;
        }else if(v1.first==v2.first){
               
                   return v1.second<v2.second;
               
        }else{
            return 0;
        }
        return -1;
    }




int main(){
   int arr[]={75,49};
   int n=sizeof(arr)/sizeof(arr[0]);


  vector<pair<int,int>> vec;
  
        for(int i=0;i<n;i++){
            vec.push_back({arr[i],i});
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        vector<pair<int,int>>::iterator itr;
        
       for(itr=vec.begin();itr<vec.end();itr++){
           cout<<(*itr).first<<" "<<(*itr).second;
           cout<<endl;
       }


        int ans=INT16_MIN;
        int suffix_idx_max=vec[n-1].second;

        for(int i=n-2;i>=0;i--){
            ans=max(ans,suffix_idx_max-vec[i].second);
            suffix_idx_max=max(suffix_idx_max,vec[i].second);
        }

        cout<<ans;
}