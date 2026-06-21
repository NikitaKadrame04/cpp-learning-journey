#include <iostream>
using namespace std;

int x=7;
void printn(int n,string s){
    cout<<"String : "<<s<<endl;
    cout<<"N : "<<n<<endl;
}
int main(){
    printn(x,"Seven");

    return 0;
}