
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"The week days are:"<<endl;
    cin>>n;
    switch(n)
    {
        case 1: cout<<"Sunday"<<endl;
        case 2: cout<<"Monday"endl;
        case 3: cout<<"Tuesday"<<endl;
        case 4: cout<<"Wenday"<<endl;
        case 5: cout<<"Thursday"<<endl;
        case 6: cout<<"Friday"<<endl;
        case 7: cout<<"Saturday"<<endl;
        default: cout<<"Invalid Choice"<<endl;
    }
    return 0;
}
