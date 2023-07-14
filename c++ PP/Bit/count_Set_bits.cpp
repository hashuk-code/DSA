#include <iostream>
using namespace std;

int main(){
    long n=15;
    int count=0;
    while(n){  
        n=(n&(n-1));
          count++;
    }    
    cout<<count;


}
///////////////////////////////////////////
// int main(){
//     int n=12;
//     long mask=(1L<<3);
//     int count=0;
//     while(mask){
//         if(n&mask){
//             count++;

//         }
//         mask=(mask>>1);
 
    
//     }

//   
// }
/////////////////////////////////////////////////////