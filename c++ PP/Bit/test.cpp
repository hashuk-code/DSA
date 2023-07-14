#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(long n) {
        int cnt=0;
        long mask=(1L<<31);
        for(int i=31;i>0;i--){
            if ((mask&n)>0){
                cnt++;
            }else{
                mask>>=1;
                
            }
        }
        return cnt;
    }
};

int main(){
    Solution obj;
    cout<<(obj.hammingWeight(8));

}