#include <cmath>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

double computeTriangleArea(double s1, double s2, double s3) {

  double s = (s1 + s2 + s3) / 2;
  double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
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

  cout << "Area is: " << computeTriangleArea(4, 13, 15) << endl;
  cout << "Area is: " << computeTriangleArea(10, 10, 10) << endl;
  cout << "Area is: " << computeTriangleArea(20, 20, 20) << endl;

  cout << "Hello World Hello -> " << encode("Hello World Hello") << endl;

}
