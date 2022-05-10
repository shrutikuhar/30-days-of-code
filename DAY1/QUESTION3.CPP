//	Program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two points: ";
    cin>>x>>y;
    if(x>0 && y>0)
        cout<<x<<" & "<<y<<" lies in the first quadrant.";
    else if(x<0 && y>0)
        cout<<x<<" & "<<y<<" lies in the second quadrant.";
    else if(x<0 && y<0)
        cout<<x<<" & "<<y<<" lies in the third quadrant.";
    else if(x>0 && y<0)
        cout<<x<<" & "<<y<<" lies in the fourth quadrant.";
    else
        cout<<x<<" & "<<y<<" lies at the origin.";
}

