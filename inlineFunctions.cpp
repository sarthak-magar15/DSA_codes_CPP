#include<iostream>
using namespace std;

/*
void func (int a, int b){
    a++;
    b++;
    cout << a << b << endl;
}
*/

int getMax(int& a, int& b){
    return (a>b) ? a : b;
}

int main()
{
    int a = 1, b = 2; 
    int ans = 0;

    /*
    if(a>b){
        ans = a;
    }
    else{
        ans = b;
    }
    */

    //Tertiary form of above if else loop
    ans = getMax(a, b); 
    cout << ans << endl;

    a = a + 3; 
    b = b + 1; 

    ans = getMax(a, b); 
    cout << ans << endl;




    return 0;
}