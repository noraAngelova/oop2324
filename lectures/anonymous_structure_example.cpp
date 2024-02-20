#include <iostream>

// Example 1: Anonymous structure
struct {
    double x;
    double y;
} anonymousStructObj;

int main () {
    anonymousStructObj.x = 4.5;
    anonymousStructObj.y = 6.7;
    return 0;
}
