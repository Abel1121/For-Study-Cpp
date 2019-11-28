#include <iostream>

    using namespace std;
int numberStart;
int numberEnd;
int main() {
    cout << "Hello, podaj jakiś zakresik i sprawdzimy które lizcby są parzyste" << endl;
    cout << "Od jakiej cyfry mam zacząć?" << endl;
    cin >> numberStart;
    cout << "Na jakiej cyfrze mam skończyć?" << endl;
    cin >> numberEnd;
    cout << "Parzyste cyfry w tym przedziale to: ";
    for (numberStart; numberStart <= numberEnd; numberStart++)
    {
        if(numberStart%2==0)
            cout << "Parzyste: " << numberStart << " ";
        else
        {
            cout << "Nieparzyste: " << numberStart << " ";
        }
    }

    return 0;
}