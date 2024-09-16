#include <iostream>
using namespace std;

class abc{
public:
    int x;
    int *y;

    abc(int _x,int _y):x(_x),y(new int(_y)){}

    //default dumb copy constructor :it does SHALLOW copy
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=obj.y;
    // }

    // Smart DEEP copy
    abc(const abc &obj){
        x=obj.x;
        y=new int(*obj.y);
    }

    void print() const{
        printf("X:%d\nPTR Y:%p\n Content of Y (*y):%d\n\n",x,y,*y);
    }

    ~abc(){
        delete y;
    }
};


int main(){
    abc a(1,2);
    a.print();

    // abc b(a);
    abc b=a;
    b.print();
    *b.y=30;
    b.print();
    a.print();
    return 0;
}