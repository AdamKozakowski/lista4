#include "ksiazka_adresowa.hpp"
#include <iostream>

using namespace std;

//Funkcja wyswietlajaca mozliwe komendy
void e_help()
{
    cout << "Ksiazka adresowa Obslugiwane komendy:\n"
         << "\t HELP \t wyswietla te pomoc\n"
         << "\t INSERT  dodaje element do ksiazki adresowej (INSERT adam adamkozak@smail.com)\n"
         << "\t AT \t odczytuje element z ksiazki adresowej (AT adam) => (adam : adamkozak@smail.com\n"
         << "\t EMPLACE zmienia wartosc klucza w ksiazce adresowej (EMPLACE adam adamkozak@smail.com)\n"
         << "\t ERASE \t usuwa element z ksiazkie adresowej (ERASE adam)\n"
         << "\t CLEAR \t usuwa WSZYSTKIE elementy z ksiazki adresowej\n"
         << "\t PRINT \t wypisuje na ekran wszystkie elementy ksiazki adresowej\n"
         << "\t EXIT \t konczy prace programu (program zapisze ksiazke do pliku \"ksiazka_adresowa.csv\", ktory odczyta przy kolejnym uruchomieniu)\n\n";
}