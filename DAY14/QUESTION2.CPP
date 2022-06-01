//FUNCTION POINTER

#include<iostream>
using namespace std ;

void fun()
{
    cout << "HELLOOO \n";
}
int main()
{
    // void (*fun_ptr)() = &fun;
    // void (*fun_ptr)() = fun;
    auto fun_ptr = fun;
    fun_ptr();
    // (*fun_ptr)();
    return 0 ;
}
