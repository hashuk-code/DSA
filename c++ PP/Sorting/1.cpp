#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct triplet{
    int element;
    int frequency;
    int index;
};

bool cmp(triplet v1,triplet v2){
     
     if(v1.frequency!=v2.frequency){
         return v1.frequency>v2.frequency;
     }
      if(v1.element!=v2.element){
          return v1.element<v2.element;
      }
      return v1.index<v2.index;

}



int main(){

    
    vector<int> vec{4,3,5,1,2,2,2,4};
    int freq[101]={0};
    for(int i=0;i<vec.size();i++){
        freq[vec[i]]++;
    }


    vector<triplet> arr;
     for(int i=0;i<vec.size();i++){
        triplet t;
        t.element=vec[i];
        t.frequency=freq[vec[i]];
        t.index=i;
        arr.push_back(t);

    }

    sort(arr.begin(),arr.end(),cmp);

    for(int i=0;i<arr.size();i++){
            cout<<arr[i].element;
 
        }

}


//  bool cmp(pair<int,int>p1, pair<int,int>p2){
//         int d1=p1.first*p1.first + p1.second*p1.second;
//         int d2=p2.first*p2.first + p2.second*p2.second;
//         return d1<d2;
//     }
//     void kClosest(vector<pair<int,int>>& points, int k) {
        
         
    
//         sort(points.begin(),points.end(),cmp);
//         vector<pair<int,int>> close_points;
//         int i=1,j=0;
//         while(i<=k){
            
//             close_points.push_back(make_pair(points[j].first,points[j].second));
//             j++;
//             i++;
//         }
        
        
//         for(int i=0;i<close_points.size();i++){
//             cout<<"["<<close_points[i].first<<","<<close_points[i].second<<"]"<<endl;
//         }
//     }


// int main(){
//    vector<pair<int,int>> points{{3,3},{5,-1},{-2,4}};

//    kClosest(points,2);
   
   
// }