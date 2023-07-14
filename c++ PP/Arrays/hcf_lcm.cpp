#include <iostream>
using namespace std;

int gcd(int num1,int num2){
   int rem;
 ///////////////////////////////////////  
   if(num1<0 && num2<0){
       num1=-1*num1;
       num2=-1*num2;
   }
   else if(num1<0 && num2>0) {    //EDGE CASES of negatives
       num1=-1*num1;
   }

   else if(num1>0 && num2<0){
        num2=-1*num2;
   }
   ////////////////////////////////////
   int temp=num1;
   num1=min(num1,num2);         //Smallest  &&& Greatest
   num2=max(temp,num2);
////////////////////////////
  if (num1==0 || num2==0){
      return max(num1,num2);    //Edgecase of zero
  }
///////////////////////////
   while(true){
        rem=num2%num1;
        if(rem==0){
            return num1;
        }else{
            num2=num1;
            num1=rem;
            continue ;
        }
   }
    
}
int main () {

    int arr_hcf[]={5,5};
    int arr_lcm[]={5,5};
    int len_hcf=sizeof(arr_hcf)/sizeof(arr_hcf[0]);
    int len_lcm=sizeof(arr_lcm)/sizeof(arr_lcm[0]);
/////////////////////////////////////////////// HCF
  if(len_hcf>=2){
    for(int i=0;i<len_hcf-1;i++){

        arr_hcf[i+1]=gcd(arr_hcf[i],arr_hcf[i+1]);
    }
  }

 //////////////////////////////////////////// LCM
  if(len_lcm>=2){

     for(int i=0;i<len_lcm-1;i++){

        arr_lcm[i+1]=(arr_lcm[i]*arr_lcm[i+1])/gcd(arr_lcm[i],arr_lcm[i+1]);
    }
  }

    cout<<arr_hcf[len_hcf-1]<<endl;
    cout<<arr_lcm[len_lcm-1];

}