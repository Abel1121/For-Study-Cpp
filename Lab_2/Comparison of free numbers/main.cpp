#include <iostream>

    using namespace std;
int number1;
int number2;
int number3;

int main() {
    cout << "Witaj, porównasz tutaj 3 liczby i wyświetlisz je w kolejności malejącej" << endl;
    cout << "Proszę, podaj pierwszą liczbę:" << endl;
    cin >> number1;
    cout << "Proszę, podaj drugą liczbę:" << endl;
    cin >> number2;
    cout << "Proszę, podaj trzecią liczbę:" << endl;
    cin >> number3;
    if (number1 > number2)
    {
        if (number1 > number3)
        {
            if (number2 > number3)
            {
                cout << "Twoje szczęśliwe liczby to: " << number1 << "," << number2 << "," << number3 << endl;
            } else {
                cout << "Twoje szczęśliwe liczby to: " << number1 << "," << number3 << "," << number2 << endl;
            }
        } else {
            cout << "Twoje szczęśliwe liczby to: " << number3 << "," << number1 << "," << number2 << endl;
        }
    } else {
        if (number2 > number3)
        {
            if (number3 > number1)
            {
                cout << "Twoje szczęśliwe liczby to: " << number2 << "," << number3 << "," << number1 << endl;
            } else {
                cout << "Twoje szczęśliwe liczby to: " << number2 << "," << number1 << "," << number3 << endl;
            }
    } else {
            cout << "Twoje szczęśliwe liczby to: " << number3 << "," << number2 << "," << number1 << endl;
        }
    }
    return 0;
}