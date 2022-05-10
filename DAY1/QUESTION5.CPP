//	Program to check whether an alphabet is a vowel or consonant

#include <iostream>
using namespace std;
int main() {
   char c;
   cout<<"Enter a character: ";
   cin>>c;
   
   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
   cout <<c<< " is a Vowel" << endl;
   else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
   cout <<c<< " is a Vowel" << endl;
   else
   cout <<c<< " is a Consonant" << endl;
   return 0;
}

