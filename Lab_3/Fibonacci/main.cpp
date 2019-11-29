#include <iostream>

    using namespace std;

int n;
int numberOne = 0;
int numberTwo = 1;
int main() {
    cout << "Powiedz, ile mam wypisać elementów z ciągu Fibonacciego?" << endl;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cout << numberTwo <<" ";
        numberTwo += numberOne;
        numberOne = numberTwo-numberOne;
    }
    return 0;
}