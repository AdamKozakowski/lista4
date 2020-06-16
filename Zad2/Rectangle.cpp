#include "Rectangle.hpp"
#include <iostream>

//konstruktor dwuargumentowy z kontrola danych
Rectangle::Rectangle(const double a, const double b) : 
    _first_side(a > 0 ? a: throw std::domain_error("Bok musi byc wyrazony liczba dodatnia")),
    _secod_side(b > 0 ? b: throw std::domain_error("Bok musi byc wyrazony liczba dodatnia")),
    _name_of_figure("Prostokat"){
};

//metoda pola
double Rectangle::area () const {
    return _first_side * _secod_side;
}

std::ostream& Rectangle::print(std::ostream& out) const{
    out << _name_of_figure << " o bokach: " << _first_side << " i " << _secod_side << "\n";
    return out;
}