#include <iostream>
#include <string>
#include <vector>

#include "klasa_osoba.h"

using namespace std;

class Student: protected Osoba {
    
        virtual string getType()=0;
        virtual string getId()=0;
        
        string imie;
        string nazwisko;
        string pesel;
        int wiek;

        int sprawdzeniePeselu(string pesel);
        void obliczanieWieku(string pesel);
    
    private:
        int indeks;

    public:
        int getIndeks();

        void setIndeks(int indeks);

    
};