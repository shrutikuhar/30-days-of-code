//CAPTURE LIST

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int y = 10;
int main()
{   
    static int x = 5;
    auto lambda_emp = [=](int a){
                x += a;
                y+= a;
            };
    lambda_emp(20);
    cout << x << ' ' << y << endl;
    return 0 ;
}
