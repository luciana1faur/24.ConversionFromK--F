#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Convert temperature in Kelvin to Fahrenheit :" << endl;
  cout << "------------------------------------------" << endl;

  double gradeK;
  float gradeF;
  cout << "Introduceti gradele Kelvin: ";
  cin >> gradeK;
  gradeF = (gradeK - 273.15) * 1.8000 + 32.00;
  cout << "Gradele F sunt: " << gradeF << endl;

  return 0; 
 
}

//℉ =(K - 273.15)* 1.8000+ 32.00