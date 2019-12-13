#include <iostream>

using namespace std;
int main() {
    int oceny[5][5] = {{1, 2,3,4,5},
                       {5,4,3,2,1},
                       {2,1,3,5,4},
                       {5,1,2,2,5},
                       {1,3,3,2,4}};
    string item[5] = {"przyrody", "WF-u", "Plastyki","Muzyki","Wosu"};
    cout << "Witaj" << endl;
    cout << "Twoje oceny z przyrody to :";

    for (int i = 0; i < 5; i++) {
        cout << "Twoje oceny z "<< item[i] << "to: " ;
        for (int j = 0; j < 5; j++) {
            cout << oceny[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}