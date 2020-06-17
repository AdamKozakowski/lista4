#ifndef KSIAZKA_ADRESOWA_HPP_INCLUDED
#define SIAZKA_ADRESOWA_HPP_INCLUDED

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

//Funkcja wyswietlajaca mozliwe komendy
void e_help();

//funckja wprowadzania nazw oraz adresów e-mail,
bool e_insert(std::map<std::string, std::string> &ebook);

//funkcja zwracajaca wartosc klucza
bool e_at(std::map<std::string, std::string> &ebook);

//funckja zmieniajaca wartosc klucza
bool e_emplace(std::map<std::string, std::string> &ebook);

//funkcja usuwajaca klucz
bool e_erase(std::map<std::string, std::string> &ebook);

//funkcja usuwajaca ksiazke
bool e_clear(std::map<std::string, std::string> &ebook);

//funckja wyswietlania
void e_print(std::map<std::string, std::string> &ebook);


#endif