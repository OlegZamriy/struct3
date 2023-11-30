#include "functions.h"
#include <iostream>

void moveRectangle(Rectangle& rect, double dx, double dy) {
    rect.x += dx;
    rect.y += dy;
}

void resizeRectangle(Rectangle& rect, double newWidth, double newHeight) {
    rect.width = newWidth;
    rect.height = newHeight;
}

void printRectangle(const Rectangle& rect) {
    std::cout << "Rectangle: Width = " << rect.width << ", Height = " << rect.height
        << ", Position: (" << rect.x << ", " << rect.y << ")\n";
}