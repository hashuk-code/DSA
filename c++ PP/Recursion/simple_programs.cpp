#include <iostream>
using namespace std;

/////////////////////////////////////////////////
/*  print n times name
 int count=0;

void myFunction(string name){
   
    if(count==5){
        return;
    }
     cout<<name<<endl;
     count++;
     myFunction(name);

}

int main(){

myFunction("Ashutosh");

}

 */
 ///////////////////////////////////////////////////////////
/*print n to 1
void myFunction(int n){
   
    if(n==0){
        return;
    }
     cout<<n<<endl;
     n--;
     myFunction(n);

}

int main(){

myFunction(10);

}

*/

///////////////////////////////////////////////////
/* n to 1 by backtracking 

void myFunction(int i,int n){
    if(i>n){
        return;
    }

    myFunction(i+1,n);
    cout<<i<<endl;
}

int main(){
    
   
 myFunction(1,10);
}

 */

/////////////////////////////////////////////////////////
/*print sum of n numbers
int sum=0;
void func(int i,int n){
    if(i>n){
        return;
    }
    sum+=i;
    func(i+1,n);
}

int main(){
    int n=10;
    func(1,n);
    cout<<sum;
}

*/
//////////////////////////////////////////////////////////
/*Factorial 

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

}
int main(){
    cout<<fact(5);
}
*/
/////////////////////////////////////////////////////////

/*string palindrome or not
string reverse="";
void func(int i,int n,string s){
    if(i>=n/2){
        reverse=s;
        return;
    }
    swap(s[i],s[n-i-1]);
    func(i+1,n,s);
    
}


int main(){
    string str="AssA";
    int len=str.length();
    int i=0;
    func(i,len,str);
    if(reverse==str){
        cout<<"string is palindrome";
    }else{
        cout<<"string is NOT a palindrome";
    }
    
    
    
}
*/

void func(int x){
    cout<<x<<endl;
    if(x>=3){
        return;
    }
    func(x+1);
    func(x+2);
    }

int main(){
func(0);
}