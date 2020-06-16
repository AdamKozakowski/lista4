#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED

#include "Figure.hpp"
#include <iostream>
#include <string>

class Rectangle : public Figure {
    public:
        //konstruktor dwuargumentowy 
        Rectangle(const double a, const double b);
        //metoda obliczania pola figury
        double area () const;
        //metoda wypisywania
        std::ostream &print(std::ostream &) const;
    private: 
        double _first_side;
        double _secod_side;
        std::string _name_of_figure;
};

#endif