// WHAT WILL BE THE OUTPUT

#include <iostream>
using namespace std;
int main()
{
    int a = 10, *pa, &ra;
    pa = &a;
    ra = a;
    cout << "a=" << ra;
    return 0;
}

//ANS: COMILER ERROR
