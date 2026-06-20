#include <iostream>
using namespace std;

int main() {
//Pointers
    int x {45};
    int y {20};
    int* ip;
    ip=&x;
    cout<< "ip: " << ip << endl; //Address of x is printed
    cout<< "*ip: " << *ip << endl;  //Value of x is printed
    cout<< "x: " << x << endl;
    cout<< "y: " << y << endl;  
//references
    int n {29};
    int& k=n;
    cout<< "n: " << n << endl;
    cout<< "k: " << k << endl;

    k=15;
    cout<< "k: " << k << endl;
    cout<< "n: " << n << endl;
/*If value of reference is changed, 
the value of the variable it references also changes. 
This is because a reference is an alias for the variable it references.*/
}
