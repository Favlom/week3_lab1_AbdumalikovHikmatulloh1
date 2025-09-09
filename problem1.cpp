#include <iostream>
using namespace std;

int main() {
    int intNumber = 24;
    float floatNumber = 3.14f;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';


    cout << "Value of Intager is " << intNumber << ". Size is " << sizeof(intNumber) << " bytes" << endl;
    cout << "Value of float is " << floatNumber << ". Size is " << sizeof(floatNumber) << " bytes" << endl;
    cout << "Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) << " bytes" << endl;
    cout << "Char is " << boolean << ". Size is " << sizeof(boolean) << " bytes" << endl;
    cout << "Value of Bool is " << charName << ". Size is " << sizeof(charName) << " bytes" << endl;

    return 0;
}
