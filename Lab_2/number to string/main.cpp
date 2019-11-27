#include <iostream>

    using namespace std;
int number;
int main() {
    cout << "Podaj cyferkę, a ja powiem jak ją zapisać" << endl;
    cin >> number;
    switch(number)
    {
        case 1:
            cout << "Cyfrę: " << number << " zapisuje się jako JEDEN" << endl;
            break;
        case 2:
            cout << "Cyfrę: " << number << " zapisuje się jako DWA" << endl;
            break;
        case 3:
            cout << "Cyfrę: " << number << " zapisuje się jako TRZY" << endl;
            break;
        case 4:
            cout << "Cyfrę: " << number << " zapisuje się jako cztery" << endl;
            break;
        case 5:
            cout << "Cyfrę: " << number << " zapisuje się jako PIĘĆ" << endl;
            break;
        case 6:
            cout << "Cyfrę: " << number << " zapisuje się jako SZEŚ" << endl;
            break;
        case 7:
            cout << "Cyfrę: " << number << " zapisuje się jako SIEDEM" << endl;
            break;
        case 8:
            cout << "Cyfrę: " << number << " zapisuje się jako OSIEM" << endl;
            break;
        case 9:
            cout << "Cyfrę: " << number << " zapisuje się jako DZIEWIĘC" << endl;
            break;
        default:
            cout << "Ta cyfra: " << number << " nie jest z zakresu od 1 do 9" << endl;
            break;
    }
    return 0;
}