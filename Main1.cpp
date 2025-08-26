#include <iostream>
using namespace std;

int main(){
    unsigned long longVar = 2266;
    unsigned short shortVar = 5;

    cout << "longVar:\t" << longVar;
    cout << "\tAddress of longVar:\t" << &longVar << endl;

    cout << "shortVar:\t" << shortVar;
    cout << "\tAddress of shortVar:\t" << &shortVar << endl;


    return 0;
}

