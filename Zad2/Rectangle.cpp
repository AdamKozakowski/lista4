#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(const double a, const double b) : 
    _first_side(a > 0 ? a: throw std::domain_error("Bok musi byc wyrazony liczba dodatnia")),
    _secod_side(b > 0 ? b: throw std::domain_error("Bok musi byc wyrazony liczba dodatnia")),
    _name_of_figure("Prostokat"){
};