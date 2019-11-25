#include <iostream>

    using namespace std;
float euro = 4.30; //dane 25.11 19:14 Google
float dolar = 3.90; //dane 25.11 19:14 Google
float pln;
int main() {
    cout << "Siemka" << endl;
    cout << "Ile masz złociszy?" << endl;
    cin >> pln;
    cout << "A więc masz: " << pln/euro <<" euro, oraz " << pln/dolar << " dolarów amerykańskich" << endl;
    return 0;
}