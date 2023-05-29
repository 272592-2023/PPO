#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
#include <string>
#include <vector>
#include "Identifiable.h"

using namespace std;

class Osoba {
    protected:
        string imie;
        string nazwisko;
        string pesel;
        string typ;
        string id; //indeks lub nr karty pracownika
        int wiek;

        int sprawdzeniePeselu(string pesel);
        void obliczanieWieku(string pesel);

    public:
        string getImie();
        string getNazwisko();
        string getPesel();
        int getWiek();
        
        void setImie(string imie);
        void setNazwisko(string nazwisko);
        int setPesel(string pesel);

        virtual string getType();
        virtual string getId();
        virtual string toString();
        virtual string toStringToPrint();
    
};
#endif