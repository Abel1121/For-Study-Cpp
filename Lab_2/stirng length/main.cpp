#include <iostream>

    using namespace std;
float maxString;
string text;
int main() {
    cout << "Witam, sprawdźmy czy text jest dłuższy od maksymalnej wartości" << endl;
    cout << "Podaj text do sprawdzenia" << endl;
    cin >> text;
    cout << "Jaka ma być maksymalna ilość znaków" << endl;
    cin >> maxString;
    if (text.length()>maxString){
        cout << "Za dużo znaków, pisz zwięźlej" << endl;
    } else {
        cout << "Wszystko OK 👍👍" << endl;
    }
    return 0;
}