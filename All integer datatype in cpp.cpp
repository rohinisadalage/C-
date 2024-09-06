#include <iostream>
using namespace std;
int main() {
    int intVar = 42;
    short shortVar = 32767;
    long longVar = 1234567890;
    long long longLongVar = 1234567890123456789;
    unsigned int uIntVar = 42;
    unsigned short uShortVar = 65535;
    unsigned long uLongVar = 1234567890;
    unsigned long long uLongLongVar = 12345678901234567890U;
    cout << "Size of int: " << sizeof(intVar) << " bytes" << endl;
    cout << "Size of short: " << sizeof(shortVar) << " bytes" << endl;
    cout << "Size of long: " << sizeof(longVar) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(longLongVar) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(uIntVar) << " bytes" << endl;
    cout << "Size of unsigned short: " << sizeof(uShortVar) << " bytes" << endl;
    cout << "Size of unsigned long: " << sizeof(uLongVar) << " bytes" << endl;
    cout << "Size of unsigned long long: " << sizeof(uLongLongVar) << " bytes" << endl;
    cout << "\nValues:" << endl;
    cout << "int: " << intVar << endl;
    cout << "short: " << shortVar << endl;
    cout << "long
