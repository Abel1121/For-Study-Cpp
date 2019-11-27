#include <iostream>

    using namespace std;
int number1;
int number2;
int number3;
int main() {
    cout << "Siemandero, podaj 3 liczby i sprawdzę czy są podzielne przez 2!" << endl;
    cout << "Podaj pierwszą cyfrę" << endl;
    cin >> number1;
    cout << "Podaj drugą cyfrę" << endl;
    cin >> number2;
    cout << "Podaj trzecią cyfrę" << endl;
    cin >> number3;
    if ((number1%2 == 0) && (number2%2==0) && (number3%2==0)){
        cout << "Te liczby są podzielne przez 2" << endl;
    } else {
        cout << "Te liczby nie są podzielne przez 2" << endl;
    }
    return 0;
}