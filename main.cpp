#include <iostream>
#include "functions.h"

int main() {
    Car myCar;
    setCarValues(myCar, 4.5, 0.15, 2000.0, 150.0, 17.0, "Blue", "Automatic");

    std::cout << "Displaying Car Details:" << std::endl;
    displayCarValues(myCar);

    std::string targetColor = "Blue";
    if (searchCarByColor(myCar, targetColor)) {
        std::cout << "The car is of color " << targetColor << "." << std::endl;
    }
    else {
        std::cout << "The car is not of color " << targetColor << "." << std::endl;
    }

    return 0;
}
