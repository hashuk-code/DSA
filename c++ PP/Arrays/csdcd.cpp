#include <iostream>
using namespace std;

long long gcd(long long num1,long long num2){
   long long rem;
   long long temp=num1;
   num1=min(num1,num2);         //Smallest  &&& Greatest
   num2=max(temp,num2);

   while(true){
        rem=num2%num1;
        if(rem==0){
            return num1;
        }else{
						
            num2=num1;
            num1=rem;
            
        }
   }
    
}

int main() {
   long long A,B;
		cin>>A>>B;
long long X=gcd(A,B);
long long Y=(A*B)/(gcd(A,B));
cout<<X<<" "<<Y;		
    return 0;
}