#include <iostream>
using namespace std;

class c1{
    
    public:
    void add(int a,int b);
};

void c1::add(int x,int y){
    cout<<"Addition = "<<(x+y);
}

int main(){
    c1 c;
    c.add(60,80);
}