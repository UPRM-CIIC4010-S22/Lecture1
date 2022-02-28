#include <cmath>
#include <vector>
#include "include/Triangle.h"

double Triangle::getArea() {

    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2;
    double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
    return area;
}

double Triangle::sumAreas(vector<Triangle> list) {

    double sum = 0;
    for (int i = 0; i < list.size(); i++) {
        sum += list[i].getArea();
    }
    return sum;

}

int Triangle::compare(Triangle t) {

    double diff = this->getArea() - t.getArea();
    if (diff < 0) return -1;
    if (diff > 0) return 1;
    return 0;

}


Triangle Triangle::scale(double factor) {

    return Triangle(this->getSide1()*factor, this->getSide2()*factor,this->getSide3()*factor);

}

Triangle Triangle::scale() {

    return scale(2);

}
