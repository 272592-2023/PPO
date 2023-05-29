#include "Osoby.h"

void Osoby::dodajOsobe(Osoba* osoba) {
    osoby.push_back(osoba);
}

int Osoby::getLiczbaOsob() {
    return osoby.size();
}

int Osoby::getLiczbaStudentow() {
    int liczbaStudentow = 0;
    for (int i=0; i<osoby.size(); i++) {
        if (osoby[i]->getType() == "student") {
            liczbaStudentow++;
        }
    }
    return liczbaStudentow;
}

int Osoby::getLiczbaPracownikow() {
    int liczbaPracownikow = 0;
    for (int i=0; i<osoby.size(); i++) {
        if (osoby[i]->getType() == "pracownik") {
            liczbaPracownikow++;
        }
    }
    return liczbaPracownikow;
}

void Osoby::usunOsobePoId(int id) {
    osoby.erase(osoby.begin()+id);
}

void Osoby::usunOsobePoPeselu(string pesel) {
    for (int i=0; i<osoby.size(); i++) {
        if (osoby[i]->getPesel() == pesel) {
            osoby.erase(osoby.begin()+i);
        }
    }
}

Osoba* Osoby::getOsobaPoId(int id) {
    return osoby[id];
}

Osoba Osoby::getOsobaPoPeselu(string pesel) {
    Osoba* osoba;
    for (int i=0; i<osoby.size(); i++) {
        if (osoby[i]->getPesel() == pesel) {
            osoba = osoby[i];
        }
    }
    return *osoba;
}

Osoba Osoby::getOsobaPoImieniu(string imie) {
    Osoba* osoba;
    for (int i=0; i<osoby.size(); i++) {
        if (osoby[i]->getImie() == imie) {
            osoba = osoby[i];
        }
    }
    return *osoba;
}

Osoba Osoby::getOsobaPoNazwisku(string nazwisko) {
    Osoba* osoba;
    for (int i=0; i<osoby.size(); i++) {
        if (osoby[i]->getNazwisko() == nazwisko) {
            osoba = osoby[i];
        }
    }
    return *osoba;
}

void Osoby::zapiszDoPliku(string nazwaPliku) {
    ofstream plik;
    plik.open("osoby.txt");
    for (int i=0; i<osoby.size(); i++) {
        plik << osoby[i]->toString() << endl;
    }
    plik.close();
}

void Osoby::wczytajZPliku(string nazwaPliku) {
    ifstream plik;
    plik.open("osoby.txt");
    string linia;
    while (getline(plik, linia)) {
        Osoba osoba;
        stringstream ss(linia);
        string imie, nazwisko, pesel, id, wiek;
        ss >> imie >> nazwisko >> pesel >> id >> wiek;
        osoba.setImie(imie);
        osoba.setNazwisko(nazwisko);
        osoba.setPesel(pesel); //wieku nie ustawiamy, bo sam sie policzy
        dodajOsobe(&osoba);
    }
    plik.close();
}

void Osoby::wyswietlOsoby() {
    for (int i=0; i<osoby.size(); i++) {
        cout << osoby[i]->toString() << endl;
    }
}