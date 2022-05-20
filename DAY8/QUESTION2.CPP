//Write C++ program to convert a string to upper case

#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
   char string[10];
 
   cout<<"Input a string to convert to upper case"<<endl;
   cin.getline(string, 10);
 
   cout<<"Characters in uppercase:"<< strupr(string);
 
   return  0;
}
