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
    //Liczba rzeczywista to zespolona z zerowa wartoscia urojona, wiec metody wykorzystujace przeciazone operatory spelniaja warunki dla liczb rzeczywistych przedstawionych w ten sposob. Przedstawienie liczb rzeczywistych przy pomocy np. typu double wprowadza wiele komplikacji np. niezgodnosc typow podczas operacji dodawania.
    Complex0 r1(5,0);
    std::cout << "Liczba rzeczywista r1: " << r1 << "\n";
    std::cout << "Dodawanie liczby rzeczywistej do zespolonej: (r1+c1): " << r1+c1 << "\n";
    std::cout << "Odejmowanie dwoch liczb zespolonych: (c0-c1): " << c0 - c1 << "\n";
    std::cout << "Odejmowanie liczby zespolonej od rzeczywistej: (r1-c1): " << r1-c1 << "\n";
    std::cout << "Mnozenie liczb zespolonych (c1*c2): " << c1*c2 << "\n";
    std::cout << "Mnozenie liczby zespolonej przez rzeczywista (c1 * r1): " << c1*r1 << "\n";
    std::cout << "Sprzezenie liczby zespolonej (c1): " << sprzezenie(c1) << "\n";
}