#pragma once

struct Rectangle {
    double width;
    double height;
    double x;
    double y;
};

void moveRectangle(Rectangle& rect, double dx, double dy);
void resizeRectangle(Rectangle& rect, double newWidth, double newHeight);
void printRectangle(const Rectangle& rect);