#include<iostream>

using namespace std;

int main() {
    
    int a = 10;
    int *address = &a;

    // cout << "Address of a:" << &a << endl; 
    // // this is also the way to find the address of a
    // cout << address << endl;

    // // this is the address of itself pointer
    // cout << &address;

    cout << *(&a);
    return 0;
}