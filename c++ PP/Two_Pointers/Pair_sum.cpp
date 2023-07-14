#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// **************if array is Sorted******************
// int main(){
//     int arr[]={1,5,11};
//     int n=sizeof(arr)/sizeof(arr[0]);  
//     n=n-1;
//     int sum=10;
//     int i=0;
//     while(i<n){
//         if(arr[i]+arr[n]>sum){
//              n--;
//         }
//         else if(arr[i]+arr[n]<sum){
//             i++;
//         }

//         else{
//             cout<<"Index = "<<i<<" "<<n<<endl;
//             cout<<arr[i]<<" "<<arr[n]<<endl;
//             return 0;
//         }
//     }

//    cout<<"Elements not found";

// }



// **************if array is Sorted & find pairs******************

// int main(){
//     int count=0;
//     int arr[]={1,4,4,4,5,5,5,6,6,11};
//     int n=sizeof(arr)/sizeof(arr[0]);  
//     n=n-1;
//     int sum=10;
//     int i=0;
//     int occur1=1,occur2=1;
//     while(i<n){
//         if(arr[i]+arr[n]>sum){
//              n--;
//         }
//         else if(arr[i]+arr[n]<sum){
//             i++;
//         }

//         else{
//           if(arr[i]==arr[n]){
//               int len=(n-i)+1;
//               count+=(len*(len-1))/2;
//               cout<<count;
//               return 0;
//           }

//             while(i<n){
//                  if(arr[i+1]==arr[i]){
//                 occur1++;
//                 i++;
//                  }else{
//                      break;
//                  }
//             }
           
//             while(i<n){
//                  if(arr[n-1]==arr[n]){
//                 occur2++;
//                 n--;
//                  }else{
//                      break;
//                  }
//             }

//             count+=occur1*occur2;
//             occur1=1;
//             occur2=1;
//             i++;
//             n--;
//         }
        
//     }
//     cout<<count;

  
// }


//************************ NOT sorted *******************
int main(){
    int sum=6;
    unordered_map<int,int> mpp;
    int  arr[]={1, 5, 7, 1};
    int len=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;

    
    for(int i=0;i<len;i++){
        if(mpp.find(sum-arr[i])!=mpp.end()){
             ans.push_back(mpp[sum-arr[i]]);
             ans.push_back(i);
            
        }
        mpp[arr[i]]=i;
    }

   vector<int> ::iterator itr;

   for(itr=ans.begin();itr<ans.end();itr++){
       cout<<*itr<<" ";
   }


}