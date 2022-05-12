//TO CHECK IF AN ARRAY IS SORTED OR NOT

//To check if an array is sorted or not
#include "bits/stdc++.h"
using namespace std;

bool sorted(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            return false;
        }
    }
    return true;
}


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    //
        int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i] ; 
    }
    if(sorted(a,n))
    {
        cout << "Sorted \n";
    }
    else
    {
        cout << "Not Sorted \n";
    }
}
