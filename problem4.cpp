#include <iostream>
using namespace std;

int main() {
    int a = 189;
    char b = 'B';

    float result1 = a / 3.0f;

    int result2 = (int)b;

    float result3 = (a + (int)b) / 5.0f;

    int offset = (a / 10) - 1;
    char result4 = b + offset;

    cout << result1 << " " << result2 << " " << result3 << " " << result4 << endl;

    return 0;
}