#include <iostream>
#include "functions.h"

int main() {
    Point point1 = { 1.0, 2.0 };
    Point point2 = { 4.0, 6.0 };

    double distance = calculateDistance(point1, point2);

    std::cout << "Distance between the points: " << distance << std::endl;

    return 0;
}
