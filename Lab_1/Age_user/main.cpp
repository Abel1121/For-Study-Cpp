#include <iostream>

using namespace std;

int actualYear = 2019;
int bornYear;
int main() {
    cout << "Podaj swój rok urodzenia" << endl;
    cin >> bornYear;
    cout << "Twój wiek to: " << actualYear - bornYear <<"lat."<< endl;
    return 0;
}