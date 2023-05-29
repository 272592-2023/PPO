#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Identifiable.h"
#include "Osoba.h"

using namespace std;

class Osoby
{
    protected:
        vector<Osoba*> osoby;
    public:
        void dodajOsobe(Osoba* osoba);
        int getLiczbaOsob();
        int getLiczbaStudentow();
        int getLiczbaPracownikow();

        void usunOsobePoId(int id); //usuwa osobe po indeksie lub nr karty pracownika
        void usunOsobePoPeselu(string pesel);

        Osoba* getOsobaPoId(int id); //zwraca osobe po indeksie lub nr karty pracownika
        Osoba getOsobaPoPeselu(string pesel);
        Osoba getOsobaPoImieniu(string imie);
        Osoba getOsobaPoNazwisku(string nazwisko);

        void zapiszDoPliku(string nazwaPliku);
        void wczytajZPliku(string nazwaPliku);

        void wyswietlOsoby();
};