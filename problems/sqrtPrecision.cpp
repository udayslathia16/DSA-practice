#include <iostream>
using namespace std;
int mysqrt(int n){
    int s=0,e=n;
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    return ans;
}
double myPrecisionSqrt(int n){
    double sqrt=mysqrt(n);

    double step=0.1;
    int precision=5;
    for(int i=0;i<precision;i++)
    {
        double j=sqrt;
        while(j*j<=n){
            sqrt=j;
            j +=step;
        }
        step=step/10;
    }

    return sqrt;
}

int main(){
    int n=51;
    // cout<<mysqrt(n);
    cout<<myPrecisionSqrt(n);
    return 0;
}