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
  cout << "Area is: " << t1.getArea() << endl;
  cout << "Area is: " << Triangle(10, 10, 10).getArea() << endl;
  cout << "Area is: " << Triangle(20, 20, 20).getArea() << endl;

  Triangle myList[3] { Triangle(4, 13, 15), Triangle(10,10,10), Triangle(20, 20, 20) };

  cout << Triangle::sumAreas(myList, 3);

  cout << "Hello World Hello -> " << encode("Hello World Hello") << endl;

}
