#include <iostream>
using namespace std;

int factorial(int n){
    while(n>0){
        static int fact=n;
        fact=fact*(n-1);
        n--;
        if(n<2){
            return fact;
        }
    }

}

int main(){
    int i;
    cout<<"Enter a Number to find Factorial: ";
    cin>>i;
    cout<<"Factorial of "<<i<<" = "<<factorial(i);
}