#include <iostream>

    using namespace std;

int number1;
int number2;
char mark;

int main() {
    cout << "Witaj mały człowieczku, jam jest prosty kalkulator, co chcesz obliczyć ?" << endl;
    cout << "Podaj pierwszą liczbę" << endl;
    cin >> number1;
    cout << "Podaj drugą liczbę" << endl;
    cin >> number2;
    cout << "Jakie działanie chcesz wykonać" << endl;
    cin >> mark;
    switch(mark)
    {
        case '+':
            cout << "Wynik twoje działania to: " << number1 + number2 << endl;
            break;
        case '-':
            cout << "Wynik twoje działania to: " << number1 - number2 << endl;
            break;
        case '*':
            cout << "Wynik twoje działania to: " << number1 * number2 << endl;
            break;
        case '/':
            if(number1!=0 || number2!=0){
                cout << "Nie wolno dzielić przez zero!!" << endl;
            } cout << "Wynik twoje działania to: " << number1 / number2 << endl;
            break;
        default:
            cout << "Kalkulator potrafi jedynie dodawać, odejmować, mnożyć i dzielić." << endl;
    }
    return 0;
}