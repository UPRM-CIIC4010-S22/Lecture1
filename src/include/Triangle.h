#include <vector>

using namespace std;

class Triangle {

private:

    double side1;
    double side2;
    double side3;

public:

    // Getters
    double getSide1() { return side1; }
    double getSide2() { return side2; }
    double getSide3() { return side3; }

    // Setters
    void setSide1(double s1) { side1 = s1; }
    void setSide2(double s2) { side2 = s2; }
    void setSide3(double s3) { side3 = s3; }

    
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double getArea();
    int compare(Triangle t);
    Triangle scale(double factor);
    static double sumAreas(vector<Triangle> list);

};
