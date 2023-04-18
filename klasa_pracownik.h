#include <iostream>
#include <string>
#include <vector>
#include "klasa_osoba.h"

using namespace std;

class Pracownik: protected Osoba{
        
        virtual string getType()=0;
        virtual string getId()=0;
        
        string imie;
        string nazwisko;
        string pesel;
        int wiek;

        int sprawdzeniePeselu(string pesel);
        void obliczanieWieku(string pesel);
    
    private:
        int nrKartyPracownika;
        string stanowisko;

    public:
        int getNrKartyPracownika();
        string getStanowisko();

        void setNrKartyPracownika(int nrKartyPracownika);
        void setStanowisko(string stanowisko);

    
};