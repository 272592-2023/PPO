#include <iostream>
#include <vector>
#include "studenci.h"
#include "ui.h"

using namespace std;

int main () {

    WektorStudentow studenci;

    int wybor;
    while (true) {
        
        cout << endl;
        cout << "Jaka czynnosc chcesz wykonac?" << endl << endl;
        cout << "1. Dodac studenta" << endl;
        cout << "2. Wyszukac studenta po peselu" << endl;
        cout << "3. Wyszukac studenta po indeksie" << endl;
        cout << "4. Wyswietlic liczbe studentow" << endl;
        cout << "5. Zakonczyc program" << endl;
        cout << endl;

        cin >> wybor;
        cout << endl;

        switch(wybor)
        {
            case 1:
            {
                Student s;
                string imie, nazwisko, pesel;
                int indeks;
                cout << "Podaj imie: ";
                cin >> imie;
                s.setImie(imie);
                cout << "Podaj nazwisko: ";
                cin >> nazwisko;
                s.setNazwisko(nazwisko);
                cout << "Podaj pesel: ";
                cin >> pesel;
                s.setPesel(pesel);
                if (s.setPesel(pesel) == 1) {
                    cout << "Podano pesel o niepoprawnej dlugosci!" << endl;
                    break;
                }
                if (s.setPesel(pesel) == 2) {
                    cout << "Podano pesel zawierajacy niepoprawne znaki!" << endl;
                    break;
                }
                cout << "Podaj indeks: ";
                cin >> indeks;
                s.setIndeks(indeks);
                studenci.dodajStudenta(s);
                if (studenci.dodajStudenta(s)==1)
                    cout << "Student o podanym indeksie juz istnieje!" << endl;
                    else cout << "Student zostal dodany!" << endl;
                break;
            }
            case 2:
            {
                string pesel;
                cout << "Podaj pesel: ";
                cin >> pesel;
                Student s = studenci.getStudent(pesel);
                if (s.getImie() == "") {
                    cout << "Nie znaleziono studenta o podanym peselu!" << endl;
                    break;
                }
                cout << "Imie: " << s.getImie() << endl;
                cout << "Nazwisko: " << s.getNazwisko() << endl;
                cout << "Pesel: " << s.getPesel() << endl;
                cout << "Indeks: " << s.getIndeks() << endl;
                cout << "Wiek: " << s.getWiek() << endl;
                break;
            }

            case 3:
            {
                int indeks;
                cout << "Podaj indeks: ";
                cin >> indeks;
                Student s = studenci.getStudent(indeks);
                if (s.getImie() == "") {
                    cout << "Nie znaleziono studenta o podanym indeksie!" << endl;
                    break;
                }
                cout << "Imie: " << s.getImie() << endl;
                cout << "Nazwisko: " << s.getNazwisko() << endl;
                cout << "Pesel: " << s.getPesel() << endl;
                cout << "Indeks: " << s.getIndeks() << endl;
                cout << "Wiek: " << s.getWiek() << endl;
                break;
            }

            case 4: 
            {
                cout << "Liczba studentow: " << studenci.getLiczbaStudentow() << endl;
                break;
            }

            case 5: 
            {
                return 0;
            }

            default:
            {
                cout << "Niepoprawny wybor!" << endl;
                break;
            }
        }

    }    

    return 0;
}