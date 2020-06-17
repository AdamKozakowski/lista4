#include "ksiazka_adresowa.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    fstream f;
    //otwieram plik
    f.open("ksiazka_adresowa.csv", fstream::in);
    if (!f)
    {
        cout << "Nie udalo sie otworzyc pliku\n";
        return -1;
    }
    map<string, string> ksiazka_adresowa;
    //kopije dane z pliku do lokalnej zmiennej typu mapa
    string name, email;
    while (f >> name >> email)
    {
        ksiazka_adresowa[name] = email;
    }
    //zamykam plik, dalsze operacje na zmiennej typu mapa
    f.close();
    
    e_help();

}