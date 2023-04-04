#include <iostream>
#include <vector>
#include "klasa_pracownik.h"

using namespace std;

class WektorPracownikow
{
    private:
        vector<Pracownik> pracownicy;
    public:
        int dodajPracownika(Pracownik p);
        Pracownik getPracownik(string pesel);
        Pracownik getPracownik(int nrKartyPracownika);
        int getLiczbaPracownikow();
};
