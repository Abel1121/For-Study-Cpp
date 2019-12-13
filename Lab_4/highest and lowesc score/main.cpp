#include <iostream>

using namespace std;
int main() {
    int oceny[10] = {1,2,3,4,5,6,7,8,9,0};
    cout << "Witaj" << endl;
    cout << "Podaj swoje oceny, a ja sprawdzę która to najwyższa a która najniższa: ";

    for(int i = 0; i < 10; i++){
        cin >> oceny[i];
    }
    int highest = 0;
    int lowest = oceny[0];
    int howManyHighest = 0;
    int howManyLowest = 0;
    for(int i = 0; i < 10; i++) {
        oceny[i] > highest ? highest = oceny[i] : highest;
        oceny[i] < lowest ? lowest = oceny[i] : lowest;
    }
    for(int i = 0; i < 10; i++) {
        if (highest == oceny[i]) {
            (howManyHighest++);
            cout << "najwyższa znajduje się na miejscu : " << i << endl;
        }
        if (lowest == oceny[i]) {
            howManyLowest++;
            cout << "Najniższa znajduje się na miejscu : " << i << endl;
        }
    }

    cout << "Twoja najwyższa ocena to: " << highest << " ,a twoja najmniejsza to: " << lowest << endl;
    cout << "Najwyższa cyfra występuje: " << howManyHighest << " razy" << endl;
    cout << "Najniższa cyfra występuje: " << howManyLowest << " razy" << endl;
    return 0;
}