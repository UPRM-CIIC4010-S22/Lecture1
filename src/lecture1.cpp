#include <cmath>
#include <iostream>
#include <string>
#include <cctype>
#include "include/Triangle.h"

using namespace std;




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

  Triangle t1(4, 13, 15);
  cout << "Area is: " << t1.computeTriangleArea() << endl;
  cout << "Area is: " << Triangle(10, 10, 10).computeTriangleArea() << endl;
  cout << "Area is: " << Triangle(20, 20, 20).computeTriangleArea() << endl;

  cout << "Hello World Hello -> " << encode("Hello World Hello") << endl;

}
