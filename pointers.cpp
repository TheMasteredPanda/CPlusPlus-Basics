#include <iostream>

using namespace std;

/**
 * Pointers point to the memory address of a field.
 * & (ampersand) - to get the memory address of that field, also known as address-to-pointer
 * * (de-reference operator) - for getting the value of a pointer.
 * int * p1 - creating a pointer field. Doing int * p1, p2; will only make p1 a pointer and p2
 * a normal field.
 * @return the process exit id.
 */
int main()
{
    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;

    p1 = &firstvalue;  // p1 = address of firstvalue
    cout << "P1: " << p1 << endl;
    p2 = &secondvalue; // p2 = address of secondvalue
    cout << "P1: " << p2 << endl;
    *p1 = 10;          // value pointed to by p1 = 10
    *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
    cout << "P2 Pointer: " << *p2 << endl;
    p1 = p2;           // p1 = p2 (value of pointer is copied)
    cout << "P1 Pointer: " << *p1 << endl;
    *p1 = 20;          // value pointed to by p1 = 20

    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    return 0;
}