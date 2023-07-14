#include <iostream>
using namespace std;

void searching_matrix(int arr[][4],int m,int n,int key){
         int i=0,j=n-1;
         
         while(i<m && j>=0){
            if(arr[i][j]==key){
                cout<<i<<","<<j;
                break;
            }else if(arr[i][j]>key){
                j--;
            }else{
                i++;
            }
         }

}
int main(){
  int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};

searching_matrix(arr,4,4,50);
}