#include <iostream>
using namespace std;
int main() {
    auto x=20;
    auto y=30;
    //Conditionals
   if(x){
        cout<<"IF BLOCK EXECUTED"<<endl;
        cout<<"X : "<<x<<endl;
   }
   if(x>y){
        cout<<"X is greater : "<<x<<endl;
   }
   else{
        cout<<"Y is greater : "<<y<<endl;
   }
   auto res = x>y?"X is greater (Ternary)" : "Y is greater (Ternary)";
   cout<<res<<endl;
   return 0;
}