#ifndef CIRCLE_HPP_INCLUDED
#define CIRCLE_HPP_INCLUDED

#include <iostream>
#include "Figure.hpp"
#include <string>

class Circle : public Figure{
    public: 
        Circle (double r);
        double area() const;
        std::ostream& print(std::ostream&) const; 
    private:
        double _radius;
        std::string _name_of_figure;
};

#endif