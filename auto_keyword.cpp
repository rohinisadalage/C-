#include <iostream>  
using namespace std;  
int main() {  
      
    auto a=45;  
    auto b='z';  
    auto c=5.6;  
    cout<<"data type of the variable a is: "<<typeid(a).name()<<endl;  
    cout<<"data type of the variable b is: "<<typeid(b).name()<<endl;  
    cout<<"data type of the variable c is: "<<typeid(c).name()<<endl;  
    return 0;  
}  
