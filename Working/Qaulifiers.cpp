#include <iostream>
using namespace std;

int func(){
    static int x=10;
    ++x;//11//12//13
    return x;
}
int main(){
    const int i=20;
    // i++; // This would cause a compilation error
    cout<<i<<endl;
    cout<<func()<<endl;
    cout<<func()<<endl;
    cout<<func()<<endl;
}