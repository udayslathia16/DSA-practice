#include <iostream>
using namespace std;

#define Area 3.14*2
#define PI 3.14
#define MAXX(x,y)(x>y?x:y)

float circleArea(float r){
    return PI * r;}

int fun(){
    int x=6;
    int b=17;
    int c=MAXX(x,b);
    cout<<c<<endl;
}
int main(){
    cout<< circleArea(2)<<endl;
    fun();
    return 0;
}