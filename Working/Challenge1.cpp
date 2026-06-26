#include <iostream>
using namespace std;

struct libinfo{
    const char* title {};
    const char *author {};
    const char * publisher {};
    const char * subject {};
    const char * ISBN {};
    int Pubyear {};
    int AcquiredYear {};
    int Qauntity {};
};
int main(){
    libinfo l1{"Make Epic Money","Ankur Warikoo","Penguin House","Self Help","9780670099818",2023,2024,98};
    cout<<"Title: "<<l1.title<<endl;
    cout<<"Author: "<<l1.author<<endl;
    cout<<"Publisher: "<<l1.publisher<<endl;
    cout<<"Subject: "<<l1.subject<<endl;
    cout<<"ISBN: "<<l1.ISBN<<endl;
    cout<<"Publication Year: "<<l1.Pubyear<<endl;
    cout<<"Acquired Year: "<<l1.AcquiredYear<<endl;
    cout<<"Quantity: "<<l1.Qauntity<<endl;
}