#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {0}; 

    // printing address of memory block
    cout << "Address of first memory block is " << arr << endl; 

    // Printing address of memory block using & operator
    cout << "Address of first memory block using & " << &arr[0] << endl;

    // accessing first element of array 
    cout << arr[0] <<endl;

    return 0; 
}