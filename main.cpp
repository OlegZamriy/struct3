#include "functions.h"

int main() {
    Rectangle myRect = { 10.0, 5.0, 0.0, 0.0 };

    printRectangle(myRect);

    moveRectangle(myRect, 2.0, 3.0);
    printRectangle(myRect);

    resizeRectangle(myRect, 8.0, 4.0);
    printRectangle(myRect);

    return 0;
}