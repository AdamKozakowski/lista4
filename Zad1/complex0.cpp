#include "complex0.hpp"

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

//metoda dodawania na przeciazonym operatorze+
Complex0 Complex0::operator+(const Complex0 &cx) const{
    Complex0 suma;
    suma._real = _real + cx._real;
    suma._imag = _imag + cx._imag;
    return suma;
}

//metoda odejmowania na przeciazonym operatorze-
Complex0 Complex0::operator-(const Complex0 &cx) const{
    Complex0 roznica;
    roznica._real = _real - cx._real;
    roznica._imag = _imag - cx._imag;
    return roznica;
}

//metoda mnozenia na przeciazonym operatorze*
Complex0 Complex0::operator*(const Complex0 &cx) const{
    Complex0 iloczyn;
    iloczyn._real = _real * cx._real - _imag * cx._imag;
    iloczyn._imag = _real * cx._imag + cx._real * _imag;
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
