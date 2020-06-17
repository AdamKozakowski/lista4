#include "ksiazka_adresowa.hpp"
#include <iostream>

using namespace std;

//Funkcja wyswietlajaca mozliwe komendy
void e_help(){
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
//funkcja do wpisywania nazw i emailow
bool e_insert(map<string, string> &ebook){
    string name, email;
    cin >> name >> email;
    size_t at = email.find_first_of('@');
    size_t dot = email.find_last_of('.');
    if (at != string::npos && at < dot){
        ebook.insert({name, email});
        if (ebook[name] != email){
            cout << "Nie udalo sie dodac rekordu, prawdopodobnie w bazie znajduje sie juz klucz '"
                 << name << "', sprobuj uzyc komendy EMPLACE.\n";
            return false;
        }
        cout << "Pomyslnie dodano " << name << " : " << ebook[name] << "\n";
        return true;
    }
    else{
        cout << "Sprobuj ponownie podajac prawidlowy email (np. danhouser@email.com)\n";
        return false;
    }
}
//funkcja zwracajaca waartosc klucza
bool e_at(map<string, string> &ebook){
    string name, email;
    cin >> name;
    try{
        email = ebook.at(name);
        cout << name << " : " << email << "\n";
        return true;
    }
    catch (const std::out_of_range &oor){
        cout << "W bazie nie ma elementu o takim kluczu, sprawdz literowki, lub sprobuj dodac element (INSERT)\n";
        return false;
    }
}
//funkcja do zamiany wartosci
bool e_emplace(map<string, string> &ebook){
    string name, email;
    cin >> name >> email;
    size_t at = email.find_first_of('@');
    size_t dot = email.find_last_of('.');
    if (at != string::npos && at > dot){
        ebook.emplace(name, email);
        if (ebook[name] != email){
            cout << "Nie udalo sie zamienic rekordu\n";
            return false;
        }
        return true;
    }
    else{
        cout << "Sprobuj ponownie podajac prawidlowy email (np. danhouser@email.com)\n";
        return false;
    }
}
//funkcja usuwania
bool e_erase(map<string, string> &ebook){
    string name, email;
    cin >> name;
    try{
        ebook.at(name);
        ebook.erase(name);
        cout << "Pomyslnie usunieto\n";
        return true;
    }
    catch (const std::out_of_range &oor){
        cout << "W bazie nie ma elementu o takim kluczu, sprawdz literowki\n";
        return false;
    }
}
//funckja czyszczenia ksiazki
bool e_clear(map<string, string> &ebook){
    cout << "Czy na pewno chcesz usunac WSZYSTKIE elementy z ksiazki adresowej?\n [Y/n]\n";
    char odp;
    cin >> odp;
    if (odp == 'Y' || odp == 'y'){
        ebook.clear();
        cout << "Pomyslnie usunieto wszystkie elementy\n";
        return true;
    }
    return false;
}