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
        //przeciazony operator dodawania liczb zespolonych
        Complex0 operator+ (const Complex0& cx) const;
        //przeciazony operator dodawania liczby rzeczywistej do zespolonej
        Complex0 operator+ (double r) const;
        //zaprzyjazniona funkcja przeciazajaca operator + by dodawać zespolone do rzeczywistych
        friend Complex0 operator+ (const double r, const Complex0& cx);
        //przeciazony operator odejmowania
        Complex0 operator- (const Complex0& cx) const;
        //przeciazony operator odejmowania rzeczywistej od zespolonej
        Complex0 operator-(const double r) const;
        //zaprzyjazniona funkcja przeciazajaca operator - by odejmowac zespolone od rzeczywistych
        friend Complex0 operator-(const double r, const Complex0& cx);
        //przeciazone operatory mnozenia:
        //complex x complex
        Complex0 operator* (const Complex0& cx) const;
        //complex x real
        Complex0 operator*(const double r) const;
        //real x complex
        friend Complex0 operator*(const double r, const Complex0& cx);
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