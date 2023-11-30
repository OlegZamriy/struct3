#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    std::string color;
    std::string transmissionType;
};

void setCarValues(Car& car, double length, double clearance, double engineVolume, double enginePower, double wheelDiameter, const std::string& color, const std::string& transmissionType);

void displayCarValues(const Car& car);

bool searchCarByColor(const Car& car, const std::string& targetColor);

#endif
