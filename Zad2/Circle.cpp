#include "Circle.hpp"

//konstruktor jednoargumentowy wyposazony w kontrole wartosci promienia
Circle::Circle(double r) : 
     _radius(r > 0 ? r : throw std::domain_error("Promien ma byc wiekszy od 0!")),
    _name_of_figure("Kolo"){
    };
