#include <cmath>
#include "include/Triangle.h"

double Triangle::getArea() {

    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2;
    double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
    return area;
}

double Triangle::sumAreas(Triangle list[], int numTriangles) {

    double sum = 0;
    for (int i = 0; i < numTriangles; i++) {
        sum += list[i].getArea();
    }
    return sum;

}
