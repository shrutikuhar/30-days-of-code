//WHAT WILL BE THE OUTPUT?

#include <iostream>
using namespace std;
  
int main()
{
    const int i = 20;
    const int* const ptr = &i;
    (*ptr)++;
    int j = 15;
    ptr = &j;
    cout << i;
    return 0;
}

//ANS: Compile error
