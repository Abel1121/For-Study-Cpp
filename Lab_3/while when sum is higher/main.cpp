#include <iostream>
#include <cstdlib>
    using namespace std;
int lowNumber;
int highNumber;
int randomly;
int sum;
int draw;
int main() {
    cout << "Hello, generowanie losowe i ich suma" << endl;
    cout << "Podaj dolny zakres losowania: ";
    cin >> lowNumber;
    cout << "Podaj górny zakres losowania: ";
    cin >> highNumber;
    do
    {
        randomly = rand() % highNumber + lowNumber;
        cout << "Wylosowano liczbę " << randomly << endl;
        draw+=1;
        sum += randomly;
    } while (sum<highNumber);
        cout << "Losowanie odbyło się " << draw << " razy. Ich suma to: " << sum << endl;
    return 0;
}