/* C++ Program to Convert Binary Number to Octal  */

#include <iostream>
#include <cmath>

using namespace std;

int convertBinarytoOctal(long long);
int main()
{
    long long binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

     cout <<"\n [ "<< binaryNumber << " ] in binary = [ " << convertBinarytoOctal(binaryNumber) << " ] in octal \n";

    return 0;
}

int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
