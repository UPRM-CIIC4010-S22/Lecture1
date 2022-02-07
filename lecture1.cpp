#include <cmath>
#include <iostream>
#include <string>
#include <cctype>
#include <Triangle.h>

using namespace std;

double computeTriangleArea(Triangle t) {

  double s = (t.side1 + t.side2 + t.side3) / 2;
  double area = sqrt(s * (s - t.side1) * (s - t.side2) * (s - t.side3));
  return area;

}


string encode(string clearText) {

  string output = "";

  for(int i=0; i<clearText.size(); i++) {
    if (isspace(clearText[i])) {
      output += '_';
    }
    else {
      output += clearText[i];
    }
  }

  return output;

}

int main() {

  cout << "Area is: " << computeTriangleArea(Triangle(4, 13, 15)) << endl;
  cout << "Area is: " << computeTriangleArea(Triangle(10, 10, 10)) << endl;
  cout << "Area is: " << computeTriangleArea(Triangle(20, 20, 20)) << endl;

  cout << "Hello World Hello -> " << encode("Hello World Hello") << endl;

}
