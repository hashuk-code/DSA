
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

unordered_map<int,int> m;

m.insert({2,3});
m.insert({4,4});
m.insert({6,7});
m.insert({9,2});
m.insert({11,3});l
m.insert({22,3});

unordered_map<int,int>::iterator itr;
for(auto itr=m.begin();itr!=m.end();itr++){
   cout<<itr->first<<" "<<itr->second;
   cout<<endl;
}



       
}