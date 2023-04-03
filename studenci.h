#include <iostream>
#include <vector>
#include "klasa_student.h"

using namespace std;

class WektorStudentow
{
    private:
        vector<Student> studenci;
    public:
        int dodajStudenta(Student s);
        Student getStudent(string pesel);
        Student getStudent(int indeks);
        int getLiczbaStudentow();
};
