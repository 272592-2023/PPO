#include <iostream>

using namespace std;

class student {
    private:
        int indeks;
        string imie;
        string nazwisko;
        string pesel;
    public:
        string getImie() { 
            return imie; 
        }

        void setImie(string imie) { 
            this->imie = imie; 
        }

        string getNazwisko() { 
            return nazwisko; 
        }

        void setNazwisko(string nazwisko) { 
            this->nazwisko = nazwisko; 
        }

        int getIndeks() { 
            return indeks; 
        }

        void setIndeks(int indeks) { 
            this->indeks = indeks; 
        }

        string getPesel() { 
            return pesel; 
        }

        void setPesel(string pesel) { 
            if (pesel.length() == 11) {
                this->pesel = pesel;
                return 0;
            } else {
                return 1;
            }
        }
};