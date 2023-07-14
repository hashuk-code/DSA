#include <iostream>
using namespace std;

int maximum_chunks(int *arr,int n){
    int current_max=INT32_MIN;
     int ans=0;
    for(int i=0;i<n;i++){
        current_max=max(current_max,arr[i]);
        if(current_max==i){
            ans++;
        }

    }
    return ans;
}

int main(){
    int arr[10]={2,1,0,4,3,5};
    cout<<maximum_chunks(arr,10);

}