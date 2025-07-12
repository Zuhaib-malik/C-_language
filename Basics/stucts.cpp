
// Learning stucts

#include <iostream> // Includes the iostream library for input/output operations
using namespace std;
int main(){


    struct Calculator
    {
        int num1;
        int num2;

        int Addition(int num1, int num2){
            return (num1+num2);
        }
        int subtraction(int num1, int num2){
            return (num1-num2);
        }

    };
    

    Calculator calc;
    calc.num1 = 4;
    calc.num2 = 2;
    int x = calc.Addition(calc.num1,calc.num2);
    int y = calc.subtraction(calc.num1 , calc.num2);
    cout<<"this is value of x  "<<x<<endl;
    cout<<"this is value of y  "<<y<<endl;

    return 0;
}