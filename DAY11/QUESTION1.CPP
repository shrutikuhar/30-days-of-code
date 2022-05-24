//WHAT IS THE OUTPUT

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    float x = 5.999;
    float* y, *z;
    y = &x;
    z = y;
    cout << x << ", " << *(&x) << ", " << *y << ", " << *z << "\n";
    return 0;
}

//ANSWWR: 5.999, 5.999, 5.999, 5.999
