// Const  
// Use of this variable and Scope of this variable 
// simple trick * chya left side const asel tr pointer varible pointing to constant value
//  right side la const asel tr constant pointer varible pointing to value 
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    /*
        //pointer variable point to a const value
    int x{ 10 };   //  x =10 ;
    char y{ 'M' };  // y = 'M' ;
 
    const int* i = &x;    //pointer variable point to a const value
    char  const* j = &y;          // both are same 
 
    // Value of x and y can be altered,
    // they are not constant variables
    x = 9;
    y = 'A';
 
    // Change of constant values because,
    // i and j are pointing to const-int
    // & const-char type value
    // *i = 6;
    // *j = 7;
 
    cout << *i << " " << *j;
    */
    
    // const pointer variable point to the value:
     // x and z non-const var
    int x = 5;
    int z = 6;
 
    // y and p non-const var
    char y = 'A';
    char p = 'C';
 
    // const pointer(i) pointing
    // to the var x's location
    int* const i = &x;
 
    // const pointer(j) pointing
    // to the var y's location
    char* const j = &y;
 
    // The values that is stored at the memory location can
    // modified even if we modify it through the pointer
    // itself No CTE error
    *i = 10;
    *j = 'D';
 
    // CTE because pointer variable
    // is const type so the address
    // pointed by the pointer variables
    // can't be changed
    // i = &z;           //  const pointer variable point to the value so we cant change the address:  
    // j = &p;
 
    cout << *i << " and " << *j << endl;
    cout << i << " and " << j;
 
    return 0;
    
}
