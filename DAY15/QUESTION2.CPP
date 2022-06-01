//LAMBDA EXPRESSION

#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{   
    vector<int> v {10, 20, 30};
    
    for_each (v.begin(), v.end(), 
        [] ( int &x ) { x *= 2 ; } );
    
    auto print = [](int x) {cout << x << ' ' ;};
    
    for_each (v.begin(), v.end(), print);
    
    return 0 ;
}
