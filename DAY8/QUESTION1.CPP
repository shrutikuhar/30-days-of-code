//Write C++ program to convert a string to lower case

#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
   char string[10];
 
   cout<<"Input a string to convert to lower case"<<endl;
   cin.getline(string, 10);
 
   cout<<"Character in lowercase:"<< strlwr(string);
 
   return  0;
}
