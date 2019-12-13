#include <iostream>

using namespace std;
int main() {
    int oceny[5][5] = {{1, 1,2,1,1},
                       {2,2,3,2,2},
                        {2,1,3,5,4},
                        {5,1,2,2,5},
                       {5,5,5,5,5}};
    string item[5] = {"Przyrody", "WF-u", "Plastyki","Muzyki","Wosu"};
    cout << "Witaj" << endl;
    cout << "Twoje oceny z przyrody to :";

    for (int i = 0; i < 5; i++) {
        cout << "Twoj średnia ocen z "<< item[i] << "to: " ;
        int value = 0;
        for (int j = 0; j < 5; j++) {
             value += oceny[i][j];
    }

    cout << value / (sizeof(oceny) / sizeof(oceny[0])) << endl;
    }
    return 0;
}