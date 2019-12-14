#include <iostream>
#include <queue>

using namespace std;
int main() {
    int oceny[10] = {1,2,3,4,5,6,7,8,9,0};
    queue<int> howManyHighestIndex;
    queue<int> howManyLowestIndex;
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
            howManyHighest++;
            howManyHighestIndex.push(i);
        }
        if (lowest == oceny[i]) {
            howManyLowest++;
            howManyLowestIndex.push(i);
        }
    }

    cout << "Twoja najwyższa ocena to: " << highest << " ,a twoja najmniejsza to: " << lowest << endl;
    cout << "Najwyższa cyfra występuje: " << howManyHighest << " razy i znajduje się na miejscach";
    while(!howManyHighestIndex.empty()){
        cout<<", "<<howManyHighestIndex.front();
        howManyHighestIndex.pop();
    } cout << endl;
    cout << "Najniższa cyfra występuje: " << howManyLowest << " razy i znajduje się na miejscach";
    while(!howManyLowestIndex.empty()){
        cout<<", "<<howManyLowestIndex.front();
        howManyLowestIndex.pop();
    } cout << endl;
    return 0;
}