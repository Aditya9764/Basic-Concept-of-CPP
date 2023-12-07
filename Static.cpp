// C++ program to demonstrate
// the use of static 
// Stati variables in a Function
#include <iostream>
#include <string>
using namespace std;
 
void demo()
{
    // static variable
    static int count = 0;
    cout << count << " ";      // 0 1 2 3 4
 
    // value is updated and
    // will be carried to next
    // function calls
    count++;
}
 
int main()
{
    for (int i = 0; i < 5; i++)
        demo();
        return 0 ;
}
//output 0 1 2 3 4 

//You can see in the above program that the variable count is declared static.
//So, its value is carried through the function calls.
//The variable count is not getting initialized every time the function is called. 


//Static variables in a class
//	As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static variables in a class are shared by the objects.
//	There can not be multiple copies of the same static variables for different objects.
//	 Also because of this reason static variables can not be initialized using constructors.
/*
#include <iostream>
using namespace std;
 
class GfG {
public:
    static int i;
 
    GfG(){
        // Do nothing
    };
};
 
int main()
{
    GfG obj1;
    GfG obj2;
    obj1.i = 2;
    obj2.i = 3;
 
    // prints value of i
    cout << obj1.i << " " << obj2.i;
}
//You can see in the above program that we have tried to create multiple copies of the static variable i for multiple objects. But this didn’t happen. 
// So, a static variable inside a class should be initialized explicitly by the user using the class name and scope resolution operator outside the class as shown below: 
*/

/*
 //Static variables in a class
#include <iostream>
using namespace std;
 
class GfG {
public:
    static int i;
 
    GfG(){
        // Do nothing
    };
};
 
int GfG::i = 1;
 
int main()
{
    GfG obj;
    // prints value of i
    cout << obj.i;
}
// 1 output

*/
