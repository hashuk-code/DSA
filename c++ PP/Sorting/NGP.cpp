#include <bits/stdc++.h>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
// //******************combination using iterative appraoch
// int factorial(int n)
// {

//     return (n==1 || n==0) ? 1: n * factorial(n - 1);
// }

// int  permutation(int arr[],int len){

//    int fact= factorial(len);
//    int i=0;

//    while(fact!=0){
//        if(i==len-1){
//            i=0;
//        }
//        int temp=arr[i];
//        arr[i]=arr[i+1];
//        arr[i+1]=temp;
       
//        i++;
//        fact--;

//      for(int k=0;k<len;k++){
//          cout<<arr[k]<<" ";
//      }  
//      cout<<endl;

//    }
    

// return 0;
    
// }

// int main(){
//     int arr[]={1,2};
//     int len=sizeof(arr)/sizeof(arr[0]);


//      permutation(arr,len);

// }




//*****************Recurive appraoch





// int  permutation(int arr[],int len,int fact,int i){

  
//    if (fact==0){
//        return 0;
//    }
   
//     if(i==len-1){
//            i=0;
//        }
//        int temp=arr[i];
//        arr[i]=arr[i+1];
//        arr[i+1]=temp;
       
//        i++;


//      for(int k=0;k<len;k++){
//          cout<<arr[k]<<" ";
//      }  
//      cout<<endl;

   
   

//    return permutation(arr,len,fact-1,i);

   

//    }
// int main(){
//     int arr[]={1,2,3};
//     int len=sizeof(arr)/sizeof(arr[0]);

//  int fact=factorial(len);
//  int i=0;
//      permutation(arr,len,fact,i);

// }



//****************************************************************8



int main(){
  vector<int> vec{1,1,5};
  int len=vec.size();
  int x=len-1;
  int store,idx=-1;

  for(int i=x;i>0;i--){
      if(vec[i]>vec[i-1]){
             store=vec[i-1];
             idx=i;
             break; 
      }
  }
 
 if(idx==-1){
     vector<int> ::iterator itr;
     
    for(itr=vec.end()-1;itr>=vec.begin();itr--){
    cout<<(*itr)<<" ";
}

   
 }else{
     for(int i=x;i>=idx;i--){

       if(vec[i]>store){
           int temp=store;
           vec[idx-1]=vec[i];
           vec[i]=temp;
           break;
       }
  }



while(idx<x){
    swap(vec[idx],vec[x]);
    idx++;
    x--;
}


vector<int> ::iterator itr;
for(itr=vec.begin();itr<vec.end();itr++){
    cout<<(*itr)<<" ";
}
 }

  







}
