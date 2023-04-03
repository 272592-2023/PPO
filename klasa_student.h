#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    private:
        int indeks;
        string imie;
        string nazwisko;
        string pesel;
        int wiek;

        int sprawdzeniePeselu(string pesel);
        void obliczanieWieku(string pesel);

    public:
        int getWiek();
        int getIndeks();
        string getPesel();
        string getImie();
        string getNazwisko();

        void setIndeks(int indeks);
        int setPesel(string pesel);
        void setImie(string imie);
        void setNazwisko(string nazwisko);

    
};