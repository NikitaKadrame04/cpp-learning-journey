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


   //Loops
   int array[] {1,2,3,4,5};
   int i{0};
  
   do{
     cout<<"Array Element : "<<array[i]<<endl;
      if(i==4){
        cout<<"Do While Loop"<<endl;
     }
     ++i;
   }while(i<5);
  
   //output of the above loop is same as below while loop
   while(i<5){
        cout<<"Array Element : "<<array[i]<<endl;
        ++i;
   }


// For loop
   for(int i{1};i<6;i++){
     cout<<"n"<<i<<": "<<i<<endl;
   }
   string s="Nikitaa_Shruu";
   for(int i{0};i<s.length();i++){
     cout<<"Character "<<i<<": "<<s[i]<<endl;
   }

//For using pointer to iterate through the string
const char s[]{"Nikitaa_Shruu"};
// for(auto* p=s; *p ;p++){
//      cout<<"Char: "<<*p<<endl;
// }

//Range based for loop using reference variable &e
const char s[]{"Nikitaa_Shruu"};
for (auto& e : s) {
     if(e==0){
          break;
     }
     cout << "Char: " << e << endl;
}

//simple for each loop to print array elements
int arr[]{1,2,3,4,5};

for(int i:arr){
     cout<<"Array Element : "<<i<<endl;
}

   return 0;
}