#include <iostream>
#include <string>
#include <vector>
#include "Identifiable.h"

using namespace std;

class Osoba: public Identifiable {
        virtual string getType()=0;
        virtual string getId()=0;

    protected:
        string imie;
        string nazwisko;
        string pesel;
        int wiek;

        int sprawdzeniePeselu(string pesel);
        void obliczanieWieku(string pesel);

    public:
        int getWiek();
        string getPesel();
        string getImie();
        string getNazwisko();

        int setPesel(string pesel);
        void setImie(string imie);
        void setNazwisko(string nazwisko);

    
};