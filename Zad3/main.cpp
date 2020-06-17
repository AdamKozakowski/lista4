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
    if (!f){
        cout << "Nie udalo sie otworzyc pliku\n";
        return -1;
    }
    map<string, string> ksiazka_adresowa;
    //kopije dane z pliku do lokalnej zmiennej typu mapa
    string name, email;
    while (f >> name >> email){
        ksiazka_adresowa[name] = email;
    }
    //zamykam plik, dalsze operacje na zmiennej typu mapa
    f.close();

    e_help();
        string input;
    while (cin >> input){
        transform(input.begin(), input.end(), input.begin(),
                  [](unsigned char c) { return std::tolower(c); }); //ulatwiam zmieniajac czcionke na mala
        if (input == "help"){
            e_help();
            continue;//pomijam niepotrzebne akcje
        }
        if (input == "insert"){
            e_insert(ksiazka_adresowa);
            continue;
        }
        if (input == "emplace"){
            e_emplace(ksiazka_adresowa);
            continue;
        }
        if (input == "at"){
            e_at(ksiazka_adresowa);
            continue;
        }
        if (input == "erase"){
            e_erase(ksiazka_adresowa);
            continue;
        }
        if (input == "clear"){
            e_clear(ksiazka_adresowa);
            continue;
        }
        if (input == "print"){
            e_print(ksiazka_adresowa);
            continue;
        }
        if (input == "exit"){
            break;
        }
        else{
            cout << "Nieprawidlowa komenda, użyj HELP aby uzyskac liste komend\n";
        }
    }
    
}