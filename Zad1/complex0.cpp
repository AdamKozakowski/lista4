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