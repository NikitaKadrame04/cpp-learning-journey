#include <iostream>
using namespace std;

int main(){
    int a[] {10,20,30,40,50,60,70,80};
    int *p = a;
    cout<<*p<<endl;     
    p++; // p now points to the next element in the array
    cout<<*p<<endl;
    cout<<*(p+2)<<endl; // Accessing the element two positions ahead of p
    cout<<"******"<<endl;
    for(int i=0; i<8; i++){
        cout<<a[i]<<endl; // Accessing elements from the current position of p
    }
}