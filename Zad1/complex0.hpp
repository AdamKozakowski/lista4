#ifndef COMPLEX0_HPP_INCLUDED
#define COMPLEX0_HPP_INCLUDED

#include <iostream>

class Complex0
{
    public:
        //konstruktor bezwarunkowy
        Complex0(); 
        //konstruktor przypisujący wartości rzeczywiste i urojone
        Complex0(double real, double imag);
        //konstruktor kopiujacy
        Complex0(const Complex0 &cx);
        //pomocniczy operator przypisywania
        const Complex0 &operator=(const Complex0 &cx);
        //metody pobierajace wartosci liczby zespolonej
        double getReal() const;
        double getImag() const;
        //przeciazony operator dodawania
        Complex0 operator+ (const Complex0& cx) const;
        //przeciazony operator odejmowania
        Complex0 operator- (const Complex0& cx) const;
        //przeciazony operator mnozenia
        Complex0 operator* (const Complex0& cx) const;
        //zaprzyjazniona funkcja sprzezenia
        //nie wiem jaki operator moglbym wykorzystac
        friend Complex0 sprzezenie(const Complex0 &c1);
        friend std::ostream& operator<<(std::ostream &out, const Complex0 &c);
    private:
        double _real;   
        double _imag;
};
//przeciazony operator<< do wyswietlania
std::ostream& operator<<(std::ostream &out, const Complex0 &c);

#endif