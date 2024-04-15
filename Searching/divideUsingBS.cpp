#include <iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int ans=-1;
    while (s<=e)
    {
        int quotient=s+(e-s)/2; //quotient is mid
        if(quotient * divisor == dividend){
            return quotient;
        }
        else if(quotient * divisor < dividend){
            ans=quotient;
            s=quotient+1;
        }
        else if(quotient * divisor > dividend){
            e=quotient-1;
        }
    }
    return ans;
    
}

int main(){
    int divisor=-5 ;
    int dividend=  36;

    int ans= getQuotient(abs(divisor),abs(dividend));
    //now we have to decide ki sign konsa lage
    if((divisor >0 && dividend <0 )||(divisor <0 && dividend >0 )){
        ans= 0- ans;
    }
    cout<<"Final answer is :"<<ans;
}