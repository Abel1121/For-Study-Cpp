#include <iostream>

    using namespace std;
int levels;

int main() {

    cout << "witaj, pokaże Ci Choinkę z cyferek" << endl;
    cout << "Ile choinka ma mieć pięter: ";
    cin >> levels;
    for (int i = 1; i <=levels ; i++)
    {
        for (int j = 1; j <= levels-i ; j++) {
            cout << "  ";
        }
        for (int j = 1; j <=i ; j++)
            {
                cout << (i*j) << " ";

            }
        cout << endl;
    }
    return 0;
}