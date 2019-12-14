#include <iostream>

    using namespace std;

int main() {
    int age[5];
    string name[5];
    cout << "Witaj, Świat!" << endl;
    cout << "Podaj 5 imion swoich ziomeczków: ";
    for (int i = 0; i < 5 ; i++) {
        cin >> name[i];
        cin >> age[i];
    } cout << endl;
//    cout << "Podaj ich wiek ";
//    for (int i = 0; i < 5 ; i++) {
//        cin >> age[i];
//    } cout << endl;
//    cout << "Twoje ziomeczki toL: ";
    for (int i = 0; i < 5 ; i++) {
        cout << name[i] << " " << age[i] << " lat. " << endl;
    }
    return 0;
}