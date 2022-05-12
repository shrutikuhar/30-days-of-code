//VECTORS

#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    //

    vector<int> v {10,5,20,15,25};

    // for(int i=v.begin(); i<v.size(); i++)
    //     v.push_back(i);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // for(auto i=v.begin(); i!=v.end(); i++)
    //     cout<<v[i]<<endl;
    // cout<<v.at[i];

    //pop back 
    v.pop_back();
    for(int x: v) cout<<x<<" ";
        cout<<endl;

    //front() and back()
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    //insert O(n)
    v.insert(v.begin(), 100);
    for(auto x: v) cout<<x<<" ";
        cout<<endl;

    v.insert(v.begin()+2, 2, 50);
    for(auto x: v) cout<<x<<" ";
        cout<<endl;

    vector <int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin()+3);
    for(auto x: v2) cout<<x<<" ";
        cout<<endl;

    //erase O(n)
    v2.erase(v2.begin(), v2.end()-2);
    for(auto x: v2) cout<<x<<" ";
        cout<<endl;

    //clear empty
    v2.clear();
    cout<<v2.size()<<endl;

    if(v2.empty()==true) cout<<"YES"<<endl;
    else cout<<"not empty"<<endl;

    //resize O(n)
    v.resize(10, 7);
    for(auto x: v) cout<<x<<" ";
        cout<<endl;


}


/* front, back, empty, cbegin, cr begin, c end, crend, r begin, r end
all have O(1) time and space complexity
