#include <iostream>

    using namespace std;

int numberStart;
int numberEnd;
int divider;
int main() {
    cout << "Hello, Podaj zakres cyfr i sprawdziwmy które są podzielne" << endl;
    cout << "Od jakiej cyfry zaczniemy nasz zakres?" << endl;
    cin >> numberStart;
    cout << "Na jakiej cyfrze skończymy nasz zakres?" << endl;
    cin >> numberEnd;
    cout << "Przez co mają być podzielony cyfry w zakresie?" << endl;
    cin >> divider;
    cout << "Liczby podzielne przez " << divider << " to: ";
    for (numberStart; numberStart <= numberEnd; numberStart++)
    {
        if(numberStart%divider==0){
            cout << numberStart << " ";
        }
    }
    return 0;
}