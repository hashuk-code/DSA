    #include <iostream>
    #include <cstring>
    #include <algorithm>
    #include <vector>
    using namespace std;

// void sorting_string(string s1,string s2){

//     int len=s1.length();

//     for(int i=0;i<len;i++){
//         int idx=0;
//         while(true){
//             if(s1[i]!=s2[idx]){
//                  if(idx==s2.length()){
//                        break;
//                    }
//                    idx++;
                  
//             }
//             else{
//                 int temp=s2[i];
//                 s2[i]=s2[idx];
//                 s2[idx]=temp;
//                 break;
//             }

//         }
//     }
//     cout<<s2;
// }


// int main(){
// string s1="cbayzx";
// string s2="acdefghijklmnopqrstuvwxyz";
// sorting_string(s1,s2);

// }


//************************************2nd Appraoch**********************

     bool cmp(pair<char,int>p1,pair<char,int>p2){
        return p1.second<p2.second;
    }
    
    string customSortString(string order, string s) {

         int rank[26]={INT16_MAX};
        
        for(int i=0;i<order.length();i++){
            rank[order[i]-'a']=i;
        }
        
        vector<pair<char,int>> vec;
        
        for(int i=0;i<s.length();i++){
            vec.push_back({s[i],rank[s[i]-'a']});
        }
        
        sort(vec.begin(),vec.end(),cmp);
        string ans="";
        
        for(int i=0;i<vec.size();i++){
            ans+=vec[i].first;
            
        }
             return ans;
    }

int main(){
    cout<<customSortString("cbafg","abcd");
}