#include "Triangle.hpp"
#include "Figure.hpp"

Triangle::Triangle(double a, double b, double c) :
    _first_side (a > 0 ? (a < b + c ? a : throw std::domain_error("Taki trojkat nie istnieje  (a>=b+c)")) : throw std::domain_error("a musi byc >0")),
    _second_side (b > 0 ? (b < a + c ? a : throw std::domain_error("Taki trojkat nie istnieje  (b>=a+c)")) : throw std::domain_error("b musi byc >0")),
    _third_side (c > 0 ? (c < a + b ? a : throw std::domain_error("Taki trojkat nie istnieje (c>=a+b)")) : throw std::domain_error("c musi byc >0")),
    _name_of_figure("Trojkat"){ 
}