#include <iostream>
#include "Student.h"

using namespace std;

string Student::getIndeks() {
    return indeks;
}

string Student::getType () {
    return "Student";
}

string Student::getId () {
    return getIndeks();
}

void Student::setIndeks(int indeks) {
    this->indeks = indeks;
}

string Student::toStringToPrint() {
    return "STUDENT - Imie: " + getImie() + " Nazwsko: " + getNazwisko() + " Pesel: " + pesel + " Indeks: " + getIndeks() + " Wiek: " + to_string(getWiek());
}