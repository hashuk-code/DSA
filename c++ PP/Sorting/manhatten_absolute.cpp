#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n=4;
    int x[n]={-1,1,3,2};
    int y[n]={5,6,5,3};


    sort(x,x+n);
    sort(y,y+n);

    int total_x_sum=0;
    int total_y_sum=0;
    int xdiff=0;
    int ydiff=0;

    for(int i=0;i<n;i++){
          total_x_sum+=x[i];
    }

    for(int i=0;i<n;i++){
          total_y_sum+=y[i];
    }
    

    for(int i=0;i<n;i++){
        total_x_sum-=x[i];
        xdiff+=total_x_sum-((n-1-i)*x[i]);

    }

    for(int i=0;i<n;i++){
        total_y_sum-=y[i];
        ydiff+=total_y_sum-((n-1-i)*y[i]);

    }

cout<<xdiff+ydiff;

}