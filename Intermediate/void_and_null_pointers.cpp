// Here i would learn About void Pointers
// this pointers have no associated dataType and can point to any type of datatype 
// And it can be typecasted to any dataType
// use of void pinter
// when we allocate memory dynamically using malloc() or calloc() then they retur a void pointer 
// And then we could use that to store any type of data like int,float,char...etc After typecasting this pinter





#include <iostream>
using namespace std;

// int main(){
//     // this is a void pointer
//     int x = 3;
//     void *p;
//     p = &x;
 
//     cout << "trying to print p "<< *((int*)p) << endl;


//     return 0;
// }

// Null Pointer
// Null pointer is that pointer which does not point to any memory location
// A Null pointer is assigned Null and could be any type 
// the value of null is 0. We can either use Null or 0 but this 0 is written in context of pointers and is not equiavlent to the integer 0.
// Size of the null pointer depends upon the platform and is similar to the size of the normal pointers.


// use of Null_Pointer 
// When maclloc() cannot assigned memory then it retur null and it can be use to error handling
// It is a good pactice to initialize a pointer as Null
// it is a good practice to perform Null check before dereferencing any pointer to avoid surprises

int main(){
    // this is a Nul_pointer
    
    float *p = NULL;
    cout << "trying to print p "<< p << endl;


    return 0;
}