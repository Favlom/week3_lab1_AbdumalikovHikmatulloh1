#include <iostream>
using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    double numerator = 3 * (x * x + 3);
    double denominator = (y / 4) + 3;
    double t = numerator / denominator;

    printf("t = %.5f\n", t);

    return 0;
}