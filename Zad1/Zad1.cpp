//program demontrujacy dzialanie klasy Complex0

#include "complex0.hpp"
#include <iostream>

int main(){
    Complex0 c0;
    std::cout << "Konstruktor bezargumentowy (c0): " << c0 << "\n";
    Complex0 c1(2,3);
    std::cout << "Konstruktor przyjmujacy za argumenty 2 i 3 (c1): " << c1 << "\n";
    Complex0 c2(c1);
    std::cout << "Konstruktor kopiujacy (c2(c1)): " << c2 << "\n";
    c0 = c1;
    std::cout << "Przeciazony operator przypisywania = (c0=c1): " << c0 << "\n"; 
    std::cout << "Dodawanie dwoch liczb zespolonych: (c0+c1): " << c0+c1 << "\n";
    double r1 = 5;
    std::cout << "Liczba rzeczywista r1: " << r1 << "\n";
    std::cout << "Dodawanie liczby rzeczywistej do zespolonej: (c1+r1): " << c1+r1 << "\n";
    std::cout << "Dodawanie liczby zespolonej do rzeczywistej: (r1+c1): " << r1+c1 << "\n";
    std::cout << "Odejmowanie dwoch liczb zespolonych: (c0-c1): " << c0 - c1 << "\n";
    std::cout << "Odejmowanie liczby rzeczywistej od zespolonej : (c1-r1): " << c1-r1 << "\n";
    std::cout << "Odejmowanie liczby zespolonej od rzeczywistej : (r1-c1): " << r1-c1 << "\n";
    std::cout << "Mnozenie liczb zespolonych (c1*c2): " << c1*c2 << "\n";
    std::cout << "Mnozenie liczby zespolonej przez rzeczywista (c1 * r1): " << c1*r1 << "\n";
    std::cout << "Mnozenie liczby rzeczywistej przez zespolona (r1 * c1): " << r1*c1 << "\n";
    std::cout << "Sprzezenie liczby zespolonej (c1): " << sprzezenie(c1) << "\n";
}