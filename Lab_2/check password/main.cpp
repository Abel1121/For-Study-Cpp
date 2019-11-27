#include <iostream>

    using namespace std;

string password;

int main() {
    cout << "Cześć, podaj hasło by się zalogować" << endl;
    cin >> password;
    if (password == "admin") {
        cout << "Gratulacje udało Ci się zalogować" << endl;
    }else{
        cout << "Hasło nie jest poprawne" << endl;
    }
    return 0;
}