#include <iostream>
#include <string>
using namespace std;

class NewMe{
    public:
    string data;
    NewMe(){
        cout<<"This is default Constructor!"<<endl;
    }
    NewMe(string str): data(str) {
        cout<<"This is Parameterized Constructor!! & Parameter is "<<data<<endl;
    }
    NewMe(const NewMe& x){
        cout<<"Copy Constructor";
        data=x.data;
    }
    ~NewMe(){
        cout<<"Destructor Initialized"<<endl;
    }

};

int main(){
    NewMe nm;
    NewMe nm2("Nikita");
    NewMe nm3=nm2;
    cout<<nm3.data<<endl;
}