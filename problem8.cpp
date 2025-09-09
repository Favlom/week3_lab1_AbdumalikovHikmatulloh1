#include <iostream>
using namespace std;

int main() {
    double diameter;

    cin >> diameter;

    double radius = diameter / 2.0;
    double area = 4 * 3.14 * radius * radius;

    printf("Area = %.2f\n", area);

    return 0;
}