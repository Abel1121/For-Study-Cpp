#include <iostream>

 using namespace std;
int main() {
    int tablica[5][5];
    cout << "Witaj" << endl;
    cout << "Podaj oceny z przedmiotów" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> tablica[i][j];
        }
    }
    cout << "Twoje oceny z przyrody to :";
    for (int i = 0; i < 5; i++) {
        cout << tablica[0][i] << " ";
    } cout << endl;
    cout << "Twoje oceny z WF-u to :";
    for (int l = 0; l < 5; l++) {
        cout << tablica[1][l] << " ";
    }
    cout << endl;
    cout << "Twoje oceny z Plastyki to :";
    for (int i = 0; i < 5; i++) {
        cout << tablica[2][i] << " ";
    }
    cout << endl;
    cout << "Twoje oceny z Muzyki to :";
    for (int i = 0; i < 5; i++) {
        cout << tablica[3][i] << " ";
    }
    cout << endl;
    cout << "Twoje oceny z Wosu to :";
    for (int i = 0; i < 5; i++) {
        cout << tablica[4][i] << " ";
    }
    cout << endl;
    return 0;
}