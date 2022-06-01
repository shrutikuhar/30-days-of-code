//SMART POINTER

#include<iostream>
#include<memory>
using namespace std ;

class Test 
{
    int x;
public:
    Test(int a = 0)
    {
        x = a;
        cout << "Constructor \n";
    }
    ~Test()
    {
        cout << "Destructor \n";
    }
    void fun()
    {
        cout << x << endl;
    }
};

int main()
{
    cout << "Main Begins \n";
    {
        unique_ptr<Test> ptr(new Test(9));
        ptr -> fun();
    }
    cout << "Main Ends \n";
    return 0 ;
}
