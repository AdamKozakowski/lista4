#include "complex0.hpp"
#include <iostream>

//konstruktor domyślny
Complex0::Complex0() : _real(0), _imag(0){
}

//konstruktor dla dwoch argumentów
Complex0::Complex0(double real, double imag) : _real(real), _imag(imag){
}

//konstruktor kopiujący
Complex0::Complex0(const Complex0 &cx){
    _real = cx._real;
    _imag = cx._imag;
}

//pomocniczy operator przypisania
const Complex0 &Complex0::operator=(const Complex0 &cx){
    _real = cx._real;
    _imag = cx._imag;
}

//metoda do pobierania wartosci rzeczywistych i urojonych liczby zespolonej
double Complex0::getReal() const {
    return _real;
}
double Complex0::getImag() const {
    return _imag;
}

//metoda dodawania liczb zespolonych na przeciazonym operatorze+
Complex0 Complex0::operator+(const Complex0 &cx) const{
    Complex0 suma;
    suma._real = _real + cx._real;
    suma._imag = _imag + cx._imag;
    return suma;
}
//przeciazony operator dodawania liczby rzeczywistej do zespolonej
Complex0 Complex0::operator+ (const double r) const{
    Complex0 suma;
    suma._real = _real + r;
    suma._imag = _imag;
    return suma;
}
//zaprzyjazniony przeciazony operator dodawania liczby zespolonej do rzeczywistej
Complex0 operator+ (const double r, const Complex0& cx){
    Complex0 suma;
    suma._real = cx._real + r;
    suma._imag = cx._imag;
    return suma;
}
//metoda odejmowania liczb zespolonych na przeciazonym operatorze-
Complex0 Complex0::operator-(const Complex0 &cx) const{
    Complex0 roznica;
    roznica._real = _real - cx._real;
    roznica._imag = _imag - cx._imag;
    return roznica;
}
//metoda odejmowania liczb rzeczywistych od zespolonych na przeciazonym operatorze-
Complex0 Complex0::operator-(const double r) const{
    Complex0 roznica;
    roznica._real = _real - r;
    roznica._imag = _imag;
    return roznica;  
}
//zaprzyjazniony przeciazony operator odejmowania liczb zespolonych od rzeczywistych 
Complex0 operator-(const double r, const Complex0& cx){
    Complex0 roznica;
    roznica._real = r - cx._real;
    roznica._imag = -cx._imag;
    return roznica;
}
//metody mnozenia na przeciazonym operatorze*
// complex x complex
Complex0 Complex0::operator*(const Complex0 &cx) const{
    Complex0 iloczyn;
    iloczyn._real = _real * cx._real - _imag * cx._imag;
    iloczyn._imag = _real * cx._imag + cx._real * _imag;
    return iloczyn;
}
//complex x real
Complex0 Complex0::operator*(const double r) const{
    Complex0 iloczyn;
    iloczyn._real = _real * r;
    iloczyn._imag = _imag * r;
    return iloczyn;
}
//real x complex
Complex0 operator*(const double r, const Complex0& cx){
    Complex0 iloczyn;
    iloczyn._real = cx._real * r;
    iloczyn._imag = cx._imag * r;
    return iloczyn;
}
//zaprzyjazniona funckja sprzezajaca
Complex0 sprzezenie(const Complex0 &c1){
    Complex0 cx;
    cx._imag = - c1._imag;
    cx._real = c1._real;
    return cx;
}
//zaprzyjazniona funckja do wyswietlania wykorzystujaca przeciążony operator <<
std::ostream& operator<<(std::ostream &out, const Complex0 &c){
    return out << "(" << c.getReal() << ", " << c.getImag() << ")";
}
