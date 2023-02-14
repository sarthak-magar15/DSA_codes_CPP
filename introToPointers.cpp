#include<iostream>
using namespace std;

int main()
{
    int num = 5; 
    
    cout << num << endl;
    //address operator is & 

    cout << "The address of the num is " << &num << endl;

    int *ptr = &num;
    cout << "Printing value: " << *ptr << endl;

    double d = 4.2; 
    double *p2 = &d; 

    cout << "Address is " << p2 << endl;
    cout << "value is " << *p2 << endl;

    cout << "size of the integer is : " << sizeof(num) << endl;
    cout << "Size of the pointer is : " << sizeof(p2) << endl;
    cout << "Size of the pointer is : " << sizeof(ptr) << endl; 

    return 0;
}