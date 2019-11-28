#include <iostream>

    using namespace std;
string text;
char a;
int howmany = 0;
int main() {
    cout << "Hello, chodź, sprawdzimy ilość znaków w twoim tekście." << endl;
    cout << "Podaj text do sprawdzenia" << endl;
    getline(cin,text);
    cout << "Czego mam szukać? " << endl;
    cin >> a;
    for (int i = 0; i < text.length(); i++)
    {
        if(text.at(i)==a)
        {
            howmany += 1;
        }
    }
    cout << "W słowie: " << text << " znak " << a << " występuje " << howmany << " razy.";
    return 0;
}