#include <iostream>


    using namespace std;
int row;
int width;
string text;
int main() {
    cout << "Witaj, narusej Ci prostokąta ⬜" << endl;
    cout << "Podaj jego szerokość: ";
    cin >> row;
    cout << "Podaj jego wysokość: ";
    cin >> width;
    cout << "Podaj znak: ";
    cin >> text;
    for (int i = 0; i <= row-1; i++)
    {
        if((i==0) || (i==1) || (i==row-1) || (i==row-2))
        {
            for (int j = 0; j < width; j++) {
                cout << text;
            }
            cout << endl;
        }
        if ((i>0) && (i<row-2))
        {
            cout << text << text;
            for (int k=0; k<row-4; k++){
                cout << " ";
            }
            cout << text << text << endl;
        }
    }
    return 0;
}