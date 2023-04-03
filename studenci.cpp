#include <iostream>
#include <vector>
#include "studenci.h"

using namespace std;

int WektorStudentow::dodajStudenta(Student s) {
    try {
        studenci.push_back(s);
        return 0;
    } catch (exception e) {
        return 1;
    }
}

Student WektorStudentow::getStudent(string pesel) {
    for (int i=0; i<studenci.size(); i++) {
        if (studenci[i].getPesel() == pesel) {
            return studenci[i];
        }
    }
    return Student();
}

Student WektorStudentow::getStudent(int indeks) {
    for (int i=0; i<studenci.size(); i++) {
        if (studenci[i].getIndeks() == indeks) {
            return studenci[i];
        }
    }
    return Student();
}

int WektorStudentow::getLiczbaStudentow() {
    return studenci.size();
}

