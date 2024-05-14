#include <iostream>
using namespace std;

union Sample {
  char a; 
  float b;
  int c;
};

int main() {
  union Sample u_name;
  u_name.a = 'c'; 
  cout << "a " << u_name.a << endl;
  cout << "b " << u_name.b << endl;
  cout << "c " << u_name.c << endl;
  cout << endl << endl;
  u_name.b = 87.99;
  cout << "a " << u_name.a << endl;
  cout << "b " << u_name.b << endl;
  cout << "c " << u_name.c << endl;
  cout << endl << endl;
  u_name.c = 103;
  cout << "a " << u_name.a << endl;
  cout << "b " << u_name.b << endl;
  cout << "c " << u_name.c << endl;
  cout << endl << endl;
  return 0;
}
