#include "Osoba.h"

using namespace std;

class Student: public Osoba, public Identifiable {
    
     private:
        string indeks;

    public:
        string getIndeks();
        string getType();
        string getId();

        void setIndeks(int indeks);

        string toStringToPrint();

    
};