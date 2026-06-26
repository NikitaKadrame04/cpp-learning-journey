#include <iostream>
using namespace std;

struct s{
    int i {};
    double d {};
    const char * str {};
};
int main()
{
    s s1{10,225.30,"Nikita Kadrame"};
    cout<<s1.i<<endl<<s1.d<<endl<<s1.str<<endl;
    
    //Accessing the members of the structure using pointer
    auto *sp= &s1;
    cout<<sp->d<<endl;
}