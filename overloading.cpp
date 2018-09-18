#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cmath>

//overloaded functions are functions that have same function namespace
//but different applications or parameters

//eg. circle area and square area

double Area(double radius)
{
	return(3.14159 * std::pow(radius, 2));
}

double Area(double h, double w)
{
	return (w * h);
}
int main() {
	std::cout << Area(2) << '\n';
	std::cout << Area(2, 2) << '\n';
	return 0;
}
/* LAMBDA */

//sort
//copy_if
//for_each
