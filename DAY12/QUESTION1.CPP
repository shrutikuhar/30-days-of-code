// C++ program to divide a string in n equal parts
#include <iostream>
#include <string.h>
 
using namespace std;
 
class example {
 
public:
    void divideString(char str[], int n)
    {
 
        int str_size = strlen(str);
        int i;
        int part_size;

        if (str_size % n != 0) {
            cout << "Invalid Input: String size";
            cout << " is not divisible by n";
            return;
        }

        part_size = str_size / n;
        for (i = 0; i < str_size; i++) {
            if (i % part_size == 0)
                cout << endl;
            cout << str[i];
        }
    }
};

int main() {
    example g;
    char str[] = "a_simple_divide_string_quest";
    g.divideString(str, 4);
    return 0;
}
