#include <iostream>
using namespace std;

int func(int a){
    a=53;
    return a;
}
int func1(const int* d){
    //*d=70; //Throws error
    return *d;
}
void func2(const string& s){
    cout<<s<<endl;
}

int main(){
    int p=2;
    cout<<func(p)<<endl;

    int n=60;
    cout<<func1(&n)<<"\n";

    string str="I am Nikita Kadrame!!";
    func2(str);
    cout<<str<<"\n";
}