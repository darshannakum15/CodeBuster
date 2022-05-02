#include <iostream>
using namespace std;

int a = 10;
int b = 30;

int main() {    
    int c = 20;


    if(::a >= ::b && ::a >= c)
        cout << "Largest number: " << ::a;

    if(::b >= ::a && ::b >= c)
        cout << "Largest number: " << ::b;

    if(c >= ::a && c >= ::b)
        cout << "Largest number: " << c;
  
    return 0;
}
