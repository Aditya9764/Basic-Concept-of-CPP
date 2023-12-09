//  Inside a function or a block which is called local variables,
//Anything between ‘{‘ and ‘}’ is said to inside a block.
// Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.


  /*
// CPP program to illustrate  
// usage of local variables  
#include<iostream> 
using namespace std; 
  
void func() 
{    
    // this variable is local to the 
    // function func() and cannot be  
    // accessed outside this function 
    int age=18;  
    cout<<age; 
} 
  
int main() 
{ 
    cout<<"Age is: "; 
    func(); 
      
    return 0; 
}
// output  - 18 
*/


//Global Variables can be accessed from any part of the program
//They are available through out the life time of a program.
// They are declared at the top of the program outside all of the functions or blocks.
