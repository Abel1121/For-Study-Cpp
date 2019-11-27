#include <iostream>

    using namespace std;
string text;
string text2;
int number1;
int main() {
    cout << "Hello, Podaj parę rzeczy, a ja sprawdzę czy wartości nie są puste" << endl;
    cout << "Podaj wyraz" << endl;
    getline(cin, text);
    cin.ignore();
    cout << "Podaj liczbę" << endl;
    cin >> number1;
    cin.ignore();
    cout << "Podaj drugi wyraz" << endl;
    getline(cin, text2);
    if ((text.length()==0) || (number1==0) || (text2.length()==0))
    {
        cout << "Któraś z wartości jest pusta" << endl;
    } else {
        cout << "Wszystko ok dajesz czasu 🎂" << endl;
    }
    return 0;
}