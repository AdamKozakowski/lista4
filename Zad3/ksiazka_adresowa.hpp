#ifndef KSIAZKA_ADRESOWA_HPP_INCLUDED
#define KSIAZKA_ADRESOWA_HPP_INCLUDED

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

//funckja wyswietlajaca mozliwe akcje na pliku
void help();

//funkcja wprowadzania nazw oraz adresów e-mail
bool insert(std::map<std::string, std::string> &ksiazka);

//pomocnicza funkcja 
bool at(std::map<std::string, std::string> &ksiazka);

// funckja zmieniania wpisów
bool emplace(std::map<std::string, std::string> &ksiazka);

//funkcja usuwania wpisu
bool erase(std::map<std::string, std::string> &ksiazka);

//funkcja usuwania calej ksiazki
bool clear(std::map<std::string,std:: string> &ksiazka);

//funkcja wyświetlania zawartości książki 
bool print(std::map<std::string, std::string> &ksiazka);

#endif