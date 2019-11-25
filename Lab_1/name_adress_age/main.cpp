#include <iostream>

using namespace std;

int main() {
    string name;
    string street;
    string postcode;
    cout << "Podaj imię i nazwisko" << endl;
    getline(cin, name);
    cout << "Podaj adres zamieszkania" << endl;
    getline(cin, street);
    cout << "Podaj kod pocztowy oraz miasto" << endl;
    getline(cin, postcode);
    cout << name << endl;
    cout << "ul. " << street << endl;
    cout << postcode << endl;

    return 0;
}