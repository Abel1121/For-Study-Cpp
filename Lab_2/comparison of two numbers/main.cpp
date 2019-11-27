#include <iostream>

    using namespace std;
int number1;
int number2;
int main() {
    cout << "Hitoj!!" << endl;
    cout << "Podaj pierwszą liczbę do porówniania" << endl;
    cin >> number1;
    cout << "Podaj drugą liczbę do porówniania" << endl;
    cin >> number2;
    if (number1 > number2)
    {
        cout << "Liczba " << number1 << " jest większa od " << number2<< endl;
    }
    else
    {
        cout << "Liczba " << number2 << " jest większa od "<< number1 << endl;
    }
    return 0;
}