#ifndef FIGURE_HPP_INCLUDED
#define FIGURE_HPP_INCLUDED

#include <iostream>

class Figure{
    public:
        virtual double area() const = 0;
        virtual std::ostream& print(std::ostream&) const = 0;
};

//przeciazony operator do wyswietlania
std::ostream& operator<<(std::ostream& out, Figure& f);

#endif