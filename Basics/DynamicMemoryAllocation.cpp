#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    void *ptr = nullptr;
    ptr = malloc(sizeof(int));
    *(int*)ptr = 7;
    cout<<"this is ptr    "<<*(int*)ptr<<endl;
    free(ptr);

}
