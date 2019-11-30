#include <iostream>

    using namespace std;
int x;
int main() {
    cout << "Hello, Od jakiej cyfry startujemy?" << endl;
    cin >> x;
    while (x > 0){
        cout << "Odliczamy: " << x << endl;
        x-= 3;
    }
    return 0;
}