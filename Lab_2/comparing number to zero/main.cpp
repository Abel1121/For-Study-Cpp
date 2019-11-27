#include <iostream>

    using namespace std;
int number;
int main() {
    cout << "Podaj liczbę a ją porównam z zerem" << endl;
    cin >> number;
    if(number<0)
    {
        cout << "Liczba jest mniejsza od 0" << endl;
    } else {
        if(number>0){
            cout << "Liczba jest większa od 0" << endl;
        } else {
            cout << "Liczba jest równa 0" << endl;
        }
    }
    return 0;
}