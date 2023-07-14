#include <iostream>
using namespace std;

int a[]={1,2,3,4};

int find_value(int n,int k){

   if (k==1){
      return n;
   }

   int x=find_value(n,k/2);
   
   if(k%2==0){
         return x*x;
   }
   else{
         return x*x*n;
   }

   
   
}

int main(){


int n=2;
int k=5;
cout<<find_value(n,k);


}