#include <iostream> // Includes the iostream library for input/output operations

using namespace std;
int main() {           
    int x = 10;
    int *ptr = &x;
    int **ptrr = &ptr;
    std::cout << "This is the value of x  =  " << x <<endl;           
    std::cout << "This is the value of x  =  " << &x <<endl;           
    std::cout << "This is the value of ptr  =  " << ptr <<endl;           
    std::cout << "This is the value of ptr  =  " << *ptr <<endl;
    std::cout << "This is the value of Adress of the ptr  =  " << &ptr <<endl;
    std::cout << "This is the value of Adress of the ptrr  =  " << *ptrr <<endl;

    return 0;                                           
}