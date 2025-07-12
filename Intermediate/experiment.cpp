
// this is inline Assambly embedding assambly in c++

#include <iostream> // Includes the iostream library for input/output operations
using namespace std;
int main(){
int x = 10;
    int y;

    __asm__ (
        "movl %1, %%eax;"  // Move the value of x into the EAX register
        "addl $5, %%eax;"  // Add 5 to the value in EAX
        "movl %%eax, %0;"  // Move the result from EAX into y
        : "=r" (y)        // Output: y is an output operand, assigned to a register (r)
        : "r" (x)         // Input: x is an input operand, assigned to a register (r)
        : "%eax"          // Clobbered register: EAX is modified by the assembly code
    );
    cout <<"this is the x of assm     " <<x<<endl;
    cout <<"this is the y of assm     " <<y<<endl;
    return 0;
}