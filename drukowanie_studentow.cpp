#include <iostream>
#include <vector>
#include "struktura_student.h"

using namespace std;

void drukowanie_studentow (vector<student> &studenci) {

    cout << "lista studentow: " << endl;

    for(student s : studenci) {
        cout << "indeks: " << s.indeks << endl;
        cout << "imie: " << s.imie << endl;
        cout << "nazwisko: " << s.nazwisko << endl;
        cout << endl;
    }

}