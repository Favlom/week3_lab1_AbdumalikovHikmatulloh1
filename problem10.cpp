#include <iostream>
using namespace std;

int main() {
    double distance, mpg, pricePerGallon;

    cin >> distance >> mpg >> pricePerGallon;

    double cost = (distance / mpg) * pricePerGallon;

    printf("The cost of driving is $%.3f\n", cost);

    return 0;
}