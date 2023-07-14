#include <iostream>
#include <cmath>
using namespace std;
#define ull unsigned long long int
int main(){
    int num=5;
    ull b_num=0;
    int cnt=0;

    while(num>0){
          int rem=num%2;
          ull c=pow(10,cnt);
          b_num+=(rem*c);
          num/=2;
          cnt++;
         
    }

  

   cout<<b_num;
}
