#include<iostream>
using namespace std ;

int main()
{
    double x, y;
    cin >> x >> y;
    try
    {
        if(x == 0.0)
            throw 0;
        if(y == 0)
            throw string("Y is 0");
        if(x + y < 0.0)
            throw (x+y);
    }
    catch(int e1)
    {
        cout << e1;
    }
    catch (string &e2)
    {
        cout << e2;
    }
    catch(...)
    {
        cout << "x+y < 0";
    }
    cout << "\nBye\n";
    return 0 ;
}
