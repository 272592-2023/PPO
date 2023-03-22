#include <iostream>
#include <vector>
#include "struktura_student.h"

using namespace std;

void dodawanie_studentow (vector<student> &studenci) {

    student nowystudent;

    cout << "Podaj indeks: " << endl;
    cin >> nowystudent.indeks;
    cout << "Podaj imie: " << endl;
    cin >> nowystudent.imie;
    cout << "Podaj nazwisko: " << endl;
    cin >> nowystudent.nazwisko;
    cout << "Podaj pesel: " << endl;
    cin >> nowystudent.pesel;

    studenci.push_back(nowystudent);

}