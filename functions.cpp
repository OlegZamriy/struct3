#include "functions.h"
#include <iostream>

void setCarValues(Car& car, double length, double clearance, double engineVolume, double enginePower, double wheelDiameter, const std::string& color, const std::string& transmissionType) {
    car.length = length;
    car.clearance = clearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

void displayCarValues(const Car& car) {
    std::cout << "Car Details:" << std::endl;
    std::cout << "Length: " << car.length << " meters" << std::endl;
    std::cout << "Clearance: " << car.clearance << " meters" << std::endl;
    std::cout << "Engine Volume: " << car.engineVolume << " cc" << std::endl;
    std::cout << "Engine Power: " << car.enginePower << " hp" << std::endl;
    std::cout << "Wheel Diameter: " << car.wheelDiameter << " inches" << std::endl;
    std::cout << "Color: " << car.color << std::endl;
    std::cout << "Transmission Type: " << car.transmissionType << std::endl;
}

bool searchCarByColor(const Car& car, const std::string& targetColor) {
    return car.color == targetColor;
}
