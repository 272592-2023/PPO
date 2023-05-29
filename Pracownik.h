#include "Osoba.h"

using namespace std;

class Pracownik: public Osoba, public Identifiable{
    
    private:
        string nrKartyPracownika;
        string stanowisko;

    public:
        string getNrKartyPracownika();
        string getStanowisko();
        string getType();
        string getId();

        void setNrKartyPracownika(int nrKartyPracownika);
        void setStanowisko(string stanowisko);

        string toStringToPrint();

    
};