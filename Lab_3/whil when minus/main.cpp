#include <iostream>

    using namespace std;
int x;
int howmany;
int sum;
int main() {

    cout << "Hello, będziemy wczytywać i sumować liczby do czasu podania minusowej cyfry" << endl;
    cout << "Podaj liczbę dodatnią: ";
    cin >> x;
    while (x > 0)
    {
        sum+=x;
        howmany+=1;
        cout << "Podaj liczbę dodatnią: ";
        cin >> x;

    }
    cout << "Podałeś liczbę ujemną" << endl;
    cout << "Podałeś " << howmany << " razy liczbę dodatnią. Ich suma to: " << sum;
    return 0;
}