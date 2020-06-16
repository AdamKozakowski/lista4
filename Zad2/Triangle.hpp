#ifndef TRIANGLE_HPP_INCLUDED
#define TRIANGLE_HPP_INCLUDED

#include "Figure.hpp"
#include <iostream>
#include <string>

class Triangle : public Figure{
    public:
        Triangle (double a, double b, double c);
        double area () const;
        std::ostream& print (std::ostream &) const;
    private:
        double _first_side;
        double _second_side;
        double _third_side;
        std::string _name_of_figure;
};

#endif