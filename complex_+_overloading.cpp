#include <iostream>
#include<complex>
using namespace std;
class Complex{
    int r,i;
    public:
    void getdata(){
        cout<<"Enter the real part"<<endl;
        cin>>r;
        cout<<"Enter the imaginary part"<<endl;
        cin>>i;
    }
    void putdata(){
        cout<<"Real"<<r<<"imaginary"<<i;
    }
    Complex operator + (Complex bb)
    {
        Complex cc;
        cc.r=r+bb.r;
        cc.i=i+bb.i;
        return cc;
    }
};
int main() {
    Complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}
