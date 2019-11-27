#include <iostream>

    using namespace std;
int numberDay;
int main() {
    cout << "Elo ziom!" << endl;
    cout << "Jakie dzień chcesz ogarnąć?" << endl;
    cin >> numberDay;
    switch(numberDay){
        case 1:
        case 2:
        case 3:
            cout << "8:00-20:00" << endl;
            break;
        case 4:
            cout << "9:00-20:00" << endl;
            break;
        case 5:
            cout << "7:00-22:00" << endl;
            break;
        case 6:
        case 7:
            cout << "Zamknięte!!" << endl;
            break;
    }
    return 0;
}