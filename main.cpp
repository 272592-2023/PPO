#include <iostream>
#include <vector>
#include "ui.h"
#include "dodawanie_studentow.h"
#include "drukowanie_studentow.h"

using namespace std;

int main () {

    vector<student> studenci;

    ui ();
    int czy=1;
    while (czy) {
        dodawanie_studentow(studenci);
        cout << "Czy chcesz dodac kolejnego studenta? (0 lub 1)" << endl;
        cin >> czy;
    }
    drukowanie_studentow(studenci);
    

    return 0;
}