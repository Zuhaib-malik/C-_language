#include <iostream> // Includes the iostream library for input/output operations


void first_function(int x);
void second_function(int& v);


using namespace std;
int main() {           
   /* int x = 10;
    int *ptr = &x;
    int **ptrr = &ptr;
    std::cout << "This is the value of x  =  " << x <<endl;           
    std::cout << "This is the value of x  =  " << &x <<endl;           
    std::cout << "This is the value of ptr  =  " << ptr <<endl;           
    std::cout << "This is the value of ptr  =  " << *ptr <<endl;
    std::cout << "This is the value of Adress of the ptr  =  " << &ptr <<endl;
    std::cout << "This is the value of Adress of the ptrr  =  " << *ptrr <<endl;
    */

    // pointer on Array

    // int arr[4] = {3, 4, 5 ,5}  ;
    // cout << "this is an array" << arr << endl;




    // for (int i = 0; i < 4; i++)
    // {
    //    cout << "this is an array item     "  << arr[i] << endl; 
    // }
    
    // int *ptrr = &arr[0];
    // cout << "this is a pointer to array    " << *ptrr << endl;

    /*
     int arr2[10];
     for (int i = 0; i < 10; i++)
     {
       
       
        if (i == 0)
        {
            i++ ;           
        }
        
            arr2[i] = i*2;

            int *ptrr;
            ptrr = &arr2[i];
            

            cout << "this is value of 2nd array element   " << *ptrr << endl;
            ptrr++;
        
        
     }
     */

    //  passing by reference


    // int x = 0;
    // cout << "this is the orignal value of x   "<< x << endl;
    // first_function(x);
    // cout<< "this is vale of x after first function call   "<< x <<endl;
    // second_function(x);
    // cout<< "this is value of x after second function call   "<< x <<endl;

    // using pointer with stuct 

    struct student
    {
        int num1;
        int num2;
    };
    student s1;
    student *sptr;
    sptr = &s1;
  

    s1.num1 = 2;
    s1.num2 = 4;
    cout<<"this is the value of num1   "<<s1.num1<<endl;
    cout<<"this is the value of num2   "<<s1.num2<<endl;
    cout<<"this is the value in sptr   "<< (*sptr).num1 <<endl;
    // we can also write it with this syntex
    cout<<"this is the value in sptr pointing to num1 "<< sptr->num1 <<endl;
    cout<<"this is the value in sptr pointing to num2   "<< sptr->num2 <<endl;

    // we can also reuse pointers
    student s2;
    s2.num1 = 7;
    sptr = &s2;
    cout<<"this is the value in sptr pointing to num1 of "<< sptr->num1 <<endl;

    




    return 0;                                           
}

// This first_function would not change the value of x because of 
void first_function(int x){
    x = x+10;
    cout << "this is first function trying to change the value of x  "<< endl;
}
// This Second function can change the value of x by passing to v and then manuputaing the v
void second_function(int& v){
    v = v+10;
    cout << "this is second function trying to change the value of x  "<<  endl;
}