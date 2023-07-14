#include <iostream>
#include <cmath>
using namespace std;

int count_set_bits(int num){
    long x=1; 
    int count=0;

    for(int i=31;i>=0;i--){
        long mask=(x<<i);
        if((num&mask)>0){
              count++;
        }
    }
    return count;
}

int main(){
    int num=27;
    cout<<count_set_bits(num);
}