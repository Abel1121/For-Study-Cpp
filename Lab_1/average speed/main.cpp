#include <iostream>

    using namespace std;
float averageSpeed;
float distanc;
float roadTime;

int main() {
    cout << "Hello, myFriend" << endl;
    cout << "Powiedz mi, jak długo jedziesz? (min)" << endl;
    cin >> roadTime;
    cout << "I ile przejechałeś w tym czasie ?? (km)" << endl;
    cin >> distanc;
    averageSpeed = (distanc*1000)/(roadTime*60);
    cout << "Wydaje mi się, że twoja średnia prędkość to: " <<averageSpeed<< " metrów/sekundę" <<endl;
    return 0;
}