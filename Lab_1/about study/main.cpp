#include <iostream>

using namespace std;

int main() {
    string nazwa_kierunku, nazwa_uczelni;
    int nr_roku;

    cout << "Podaj nazwę kierunku: " << endl;
    cin >> nazwa_kierunku;
    cin.ignore();
    cout << "Podaj nazwę uczelni: " << endl;
    getline(cin, nazwa_uczelni);
    cout << "Podaj rok studiów: " << endl;
    cin >> nr_roku;
    cout << "Twoja uczelnia to: "<< nazwa_uczelni <<", studiujesz na " << nr_roku <<" roku. Twój kierunek to: "<< nazwa_kierunku <<". Powodzenia podczas zajęć z podstaw programowania!" << endl;
    return 0;
}