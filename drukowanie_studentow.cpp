#include <iostream>
#include <vector>
#include "struktura_student.h"

using namespace std;

void drukowanie_studentow (vector<student> studenci) {

    cout << "lista studentow: " << endl;
    for (int i=0; i<studenci.size(); i++) {
        cout << "indeks: " << studenci[i].indeks << endl;
        cout << "imie: " << studenci[i].imie << endl;
        cout << "nazwisko: " << studenci[i].nazwisko << endl;
        cout << endl;
    }

}