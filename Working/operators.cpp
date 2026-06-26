#include <iostream>
using namespace std;
int main(){
    //Assignment operators
    int a = 10;
    int b = 20;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"a + b = "<<(a+b)<<endl;
    cout<<"a - b = "<<(a-b)<<endl;
    cout<<"a * b = "<<(a*b)<<endl;
    cout<<"a / b = "<<(a/b)<<endl;
    cout<<"a % b = "<<(a%b)<<endl;

    //Comparison operators
    cout<<"a == b: "<<(a==b)<<endl;
    cout<<"a != b: "<<(a!=b)<<endl;
    cout<<"a > b: "<<(a>b)<<endl;
    cout<<"a < b: "<<(a<b)<<endl;
    cout<<"a >= b: "<<(a>=b)<<endl;
    cout<<"a <= b: "<<(a<=b)<<endl;

    //Logical operators
    if (a>5 && b<25){
        cout<<"Both conditions are true"<<endl;
    }
    if (a>15 || b<25){
        cout<<"At least one condition is true"<<endl;
    }
    if (!(a>15)){
        cout<<"Condition is false"<<endl;
    }

    //Compound assignment operators
    a+=5;
    cout<<"a after a+=5: "<<a<<endl;
    b+=10;
    cout<<"b after b+=10: "<<b<<endl;
    a-=5;
    cout<<"a after a-=5: "<<a<<endl;
    b-=10;
    cout<<"b after b-=10: "<<b<<endl;
    a*=2;
    cout<<"a after a*=2: "<<a<<endl;
    b*=3;
    cout<<"b after b*=3: "<<b<<endl;
    a/=2;
    cout<<"a after a/=2: "<<a<<endl;
    b/=3;
    cout<<"b after b/=3: "<<b<<endl;

    //Unary operators
    int x=29;
    cout<<"x = "<<x<<endl;
    cout<<"++x = "<<(++x)<<endl;    
    cout<<"x++ = "<<(x++)<<endl;
    cout<<"--x = "<<(--x)<<endl;
    cout<<"x-- = "<<(x--)<<endl;

}