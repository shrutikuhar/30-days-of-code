//LAMBDA EXPRESSION

#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{   
    vector<int> v {10, 20, 30};
    
    int res = count_if(v.begin(), v.end(), 
        [](int x) {return x < 10; });     
    
    cout << res;
    
    return 0 ;
}
