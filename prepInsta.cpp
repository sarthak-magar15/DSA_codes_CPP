#include<iostream>
using namespace std; 

int main(){

    /*
    we need to print 
    ****
    ****
    ****
    ****
    */

   int n; 
   cin >> n; 

   int row = 1; 
   
   while(row <= n){
        int col = 1; 

        while (col <= n)
        {
            cout << "*"; 
            col = col +1; 
        }
        cout << endl; 
        row = row +1;
        
   }

}