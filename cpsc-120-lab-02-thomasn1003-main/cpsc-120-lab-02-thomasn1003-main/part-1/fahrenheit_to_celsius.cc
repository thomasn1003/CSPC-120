// Thomas Nguyen
// CPSC 120-01
// 2022 -08-31
// thomasn1003@csu.fullerton.edu
// @thomasn1003
//
// Lab Part 1
//
//
//
// This my first program and it calculated fahrenheit to celsius
//
#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int fahrenheit = 0;
  double celsius = NAN;
  fahrenheit = 451;
  celsius = fahrenheit * 9.0 / 5.0 + 32.0;
  cout << fahrenheit << " degrees Fahrenheit is " << celsius
       << " degrees Celsius.\n";
  return 0;
  
}
