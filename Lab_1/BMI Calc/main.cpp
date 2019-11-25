#include <iostream>

    using namespace std;

int weight;
int growth;
float BMI;
int main() {
    cout << "Witaj" << endl;
    cout << "Proszę podaj mi swoją wagę(w kg): " << endl;
    cin >> weight;
    cout << "Proszę podaj mi swój wzrost(w cm): " << endl;
    cin >> growth;
    BMI = weight / (growth*growth/10000.);
    cout << "Twoje BMI wynosi: " << BMI << endl;
    return 0;
}