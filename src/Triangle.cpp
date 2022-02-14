#include <cmath>
#include "include/Triangle.h"

double Triangle::computeTriangleArea() {

    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2;
    double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
    return area;
}
