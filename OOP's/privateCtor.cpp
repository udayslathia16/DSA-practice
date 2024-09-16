#include <iostream>
using namespace std;

class box{
    int width;
    box(int _w):width(_w){};

public:
    int getWidth() const{
        return width;
    }

    void setWidth(int _val){
        width=_val;
    } 
    friend class boxFactory;
};

class boxFactory{
    int count;
public:
    box getbox(int _w){
        ++count;
        return box(_w);
    }
};

int main(){
    boxFactory bac;
    box b=bac.getbox(5);
    cout<<b.getWidth();

    return 0;
}