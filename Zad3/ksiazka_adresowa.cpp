#include "ksiazka_adresowa.hpp"
#include <iostream>

using namespace std;

void e_help()
{
    cout << "Ksiazka adresowa\n Obslugiwane komendy:\n"
         << "\t HELP \t wyswietla te pomoc\n"
         << "\t INSERT  dodaje element do ksiazki adresowej (INSERT adam adam_kozakowski@gmail.com)\n"
         << "\t AT \t odczytuje element z ksiazki adresowej (AT Adam) => (adam : adam_kozakowski@gmail.com)\n"
         << "\t EMPLACE zmienia wartosc klucza w ksiazce adresowej (EMPLACE adam adam_kozak00@gmail.com)\n"
         << "\t ERASE \t usuwa element z ksiazkie adresowej (ERASE adam)\n"
         << "\t CLEAR \t usuwa WSZYSTKIE elementy z ksiazki adresowej\n"
         << "\t PRINT \t wypisuje na ekran wszystkie elementy ksiazki adresowej\n"
         << "\t EXIT \t konczy prace programu (program zapisze ksiazke do pliku \"ksiazka_adresowa.csv\", ktory odczyta przy kolejnym uruchomieniu)\n\n";
}

