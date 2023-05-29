#include <iostream>
#include <vector>
#include "Student.h"
#include "Pracownik.h"
#include "Osoby.h"

using namespace std;

int main () {

    Osoby *osoby;

    int wybor, indeks, nrKartyPracownika, id;
    string pesel, imie, nazwisko, stanowisko, nazwaPliku;
    while (true) {
        
        cout << endl;
        cout << "Jaka czynnosc chcesz wykonac?" << endl << endl;
        cout << "1. Wyszukac osobe" << endl;
        cout << "2. Dodac osobe" << endl;
        cout << "3. Usunac osobe" << endl;
        cout << "4. Wyswietlic liczbe osob" << endl;
        cout << "5. Operacje na pliku" << endl;
        cout << "6. Zakonczyc program" << endl;
        cout << endl;

        cin >> wybor;
        cout << endl;

        switch (wybor){
            case 1: 
                cout << "1. Wyszukac osobe po peselu" << endl;
                cout << "2. Wyszukac osobe po imieniu" << endl;
                cout << "3. Wyszukac osobe po nazwisku" << endl;
                cout << "4. Wyszukac osobe po indeksie" << endl;
                cout << "5. Wyszukac osobe po nr karty pracownika" << endl;
                cout << "6. Wyswietlic wszystkie osoby" << endl;
                cout << endl;

                cin >> wybor;
                cout << endl;

                switch (wybor){
                    case 1: 
                        cout << "Podaj pesel: ";
                        cin >> pesel;
                        cout << endl;
                        osoby->getOsobaPoPeselu(pesel).toStringToPrint();
                        break;
                    case 2: 
                        cout << "Podaj imie: ";
                        cin >> imie;
                        cout << endl;
                        osoby->getOsobaPoImieniu(imie).toStringToPrint();
                        break;
                    case 3: 
                        cout << "Podaj nazwisko: ";
                        cin >> nazwisko;
                        cout << endl;
                        osoby->getOsobaPoNazwisku(nazwisko).toStringToPrint();
                        break;
                    case 4:
                        cout << "Podaj indeks: ";
                        cin >> indeks;
                        cout << endl;
                        osoby->getOsobaPoId(indeks).toStringToPrint();
                        break;
                    case 5:
                        cout << "Podaj nr karty pracownika: ";
                        cin >> nrKartyPracownika;
                        cout << endl;
                        osoby->getOsobaPoId(nrKartyPracownika).toStringToPrint();
                        break;
                    case 6: 
                        osoby->wyswietlOsoby();
                        break;
                    default: 
                        cout << "Nie ma takiej opcji" << endl;
                        break;
                }
                break;

            case 2:
                cout << "1. Dodac studenta" << endl;
                cout << "2. Dodac pracownika" << endl;
                cout << endl;

                cin >> wybor;
                cout << endl;

                switch (wybor){
                    case 1: 
                        Student *student = new Student();
                        cout << "Podaj imie: ";
                        cin >> imie;
                        cout << endl;
                        student->setImie(imie);
                        cout << "Podaj nazwisko: ";
                        cin >> nazwisko;
                        cout << endl;
                        student->setNazwisko(nazwisko);
                        cout << "Podaj pesel: ";
                        cin >> pesel;
                        cout << endl;
                        student->setPesel(pesel);
                        cout << "Podaj indeks: ";
                        cin >> wybor;
                        cout << endl;
                        student->setIndeks(indeks);
                        osoby->dodajOsobe(student);
                        break;
                    case 2: 
                        Pracownik *pracownik = new Pracownik();
                        cout << "Podaj imie: ";
                        cin >> imie;
                        cout << endl;
                        pracownik->setImie(imie);
                        cout << "Podaj nazwisko: ";
                        cin >> nazwisko;
                        cout << endl;
                        pracownik->setNazwisko(nazwisko);
                        cout << "Podaj pesel: ";
                        cin >> pesel;
                        cout << endl;
                        pracownik->setPesel(pesel);
                        cout << "Podaj nr karty pracownika: ";
                        cin >> nrKartyPracownika;
                        cout << endl;
                        pracownik->setNrKartyPracownika(nrKartyPracownika);
                        cout << "Podaj stanowisko: ";
                        cin >> stanowisko;
                        pracownik->setStanowisko(stanowisko);
                        cout << endl;
                        osoby->dodajOsobe(pracownik);
                        break;
                    default: 
                        cout << "Nie ma takiej opcji" << endl;
                        break;
                }
                break;
            
            case 3:
                cout << "1. Usunac osobe po peselu" << endl;
                cout << "2. Usunac osobe po id" << endl;
                cout << endl;

                cin >> wybor;
                cout << endl;

                switch (wybor){
                    case 1: 
                        cout << "Podaj pesel: ";
                        cin >> pesel;
                        cout << endl;
                        osoby->usunOsobePoPeselu(pesel);
                        break;
                    case 2: 
                        cout << "Podaj id: ";
                        cin >> id;
                        cout << endl;
                        osoby->usunOsobePoId(id);
                        break;
                    default: 
                        cout << "Nie ma takiej opcji" << endl;
                        break;
                }
                break;
            
            case 4:
                cout << "1. Wyswietlic liczbe studentow" << endl;
                cout << "2. Wyswietlic liczbe pracownikow" << endl;
                cout << "3. Wyswietlic liczbe wszystkich osob" << endl;

                cin >> wybor;
                cout << endl;

                switch (wybor){
                    case 1: 
                        cout << "Liczba studentow: " << osoby->getLiczbaStudentow() << endl;
                        break;
                    case 2: 
                        cout << "Liczba pracownikow: " << osoby->getLiczbaPracownikow() << endl;
                        break;
                    case 3: 
                        cout << "Liczba wszystkich osob: " << osoby->getLiczbaOsob() << endl;
                        break;
                    default: 
                        cout << "Nie ma takiej opcji" << endl;
                        break;
                }

                break;

            case 5:
                cout << "1. Zapisac do pliku" << endl;
                cout << "2. Wczytac z pliku" << endl;
                cout << endl;

                cin >> wybor;
                cout << endl;

                switch (wybor){
                    case 1: 
                        cout << "Podaj nazwe pliku: ";
                        cin >> nazwaPliku;
                        cout << endl;
                        osoby->zapiszDoPliku(nazwaPliku);
                        break;
                    case 2: 
                        cout << "Podaj nazwe pliku: ";
                        cin >> nazwaPliku;
                        cout << endl;
                        osoby->wczytajZPliku(nazwaPliku);
                        break;
                    default: 
                        cout << "Nie ma takiej opcji" << endl;
                        break;
                }
                break;

            case 6:
                return 0;

            deafult: 
                cout << "Nie ma takiej opcji" << endl;
                break;
        }
        

    }    

    return 0;
}