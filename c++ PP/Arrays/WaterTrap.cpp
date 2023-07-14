#include <iostream>
#include <vector>
using namespace std;
///////////water trap///////////
int trap(vector<int>& height){
    
    int pmax[height.size()];
        pmax[0]=height[0];
    int smax[height.size()];
        smax[height.size()-1]=height[height.size()-1];
    int sum_rainfall=0;
      
         for(int i=1;i<height.size();i++){
                 
              if(height[i]>pmax[i-1]){
                  pmax[i]=height[i];
              }else{
                  pmax[i]=pmax[i-1];
              }

         }
       
       for(int j=height.size()-2;j>=0;j--){

           if(height[j]>smax[j+1]){
                   smax[j]=height[j];
           }else{
                smax[j]=smax[j+1];
           }
       }
     

      for(int k=1;k<height.size()-1;k++){
             if(height[k]<pmax[k-1] && height[k]<smax[k+1]){

                  if(pmax[k-1]<smax[k+1]){
                     sum_rainfall=sum_rainfall + (pmax[k-1]-height[k]);
                  }else{
                     sum_rainfall=sum_rainfall+(smax[k+1]-height[k]);
                   }  

             }
     }
                                   
   return sum_rainfall;

} 


int main(){

vector<int> height={1,0,0,0,0,2,3};

cout<<trap(height);




}