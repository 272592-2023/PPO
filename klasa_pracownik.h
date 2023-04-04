#include <iostream>
#include <string>
#include <vector>
#include "klasa_osoba.h"

using namespace std;

class Pracownik: protected Osoba{
    private:
        int nrKartyPracownika;
        string imie;
        string nazwisko;
        string pesel;
        int wiek;
        string stanowisko;

        int sprawdzeniePeselu(string pesel);
        void obliczanieWieku(string pesel);

    public:
        int getWiek();
        int getNrKartyPracownika();
        string getPesel();
        string getImie();
        string getNazwisko();
        string getStanowisko();

        void setNrKartyPracownika(int nrKartyPracownika);
        int setPesel(string pesel);
        void setImie(string imie);
        void setNazwisko(string nazwisko);
        void setStanowisko(string stanowisko);

    
};