#include <iostream>
#include "klasa_student.h"

using namespace std;

int Student::getIndeks() {
    return indeks;
}; 

void Student::setIndeks(int indeks) {
    this->indeks = indeks;
};

string getType () {
    return "Student";
}

string getId () {
    return getIndeks();
}