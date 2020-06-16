#include "Figure.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& out, Figure& f)
{
    f.print(out);
    return out;
}