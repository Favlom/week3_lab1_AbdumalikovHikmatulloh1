#include <iostream>
using namespace std;

int main() {
    double v0, v1, t;

    cin >> v0 >> v1 >> t;

    double acceleration = (v1 - v0) / t;

    printf("%.2f\n", acceleration);

    return 0;
}