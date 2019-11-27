#include <iostream>

    using namespace std;
int points;
int main() {
    cout << "Powiedz ile masz punktów, a powiem Ci jaką ocenę dostałeś mój ziomeckzu" << endl;
    cin >> points;
    if (points<=25 && points>=0)
    {
        cout << "Twoja ocena to dwa" << endl;
        cout << "Potrzebowałeś: " << 26-points << " punktów do wyższej oceny." << endl;
    }
    else if (points>=26 && points<=30)
    {
        cout << "Twoja ocena to 3" << endl;
        cout << "Potrzebowałeś: " << 31-points << " punktów do wyższej oceny." << endl;
    }else if (points>=31 && points<=35)
    {
        cout << "Twoja ocena to 3,5" << endl;
        cout << "Potrzebowałeś: " << 36-points << " punktów do wyższej oceny." << endl;
    }
    else if (points>=36 && points<=40)
    {
        cout << "Twoja ocena to 4" << endl;
        cout << "Potrzebowałeś: " << 41-points << " punktów do wyższej oceny." << endl;
    }
    else if (points>=41 && points<=45)
    {
        cout << "Twoja ocena to 4,5" << endl;
        cout << "Potrzebowałeś: " << 46-points << " punktów do wyższej oceny." << endl;
    }
    else if (points>=46 && points<=50)
    {
        cout << "Twoja ocena to 5" << endl;
        cout << "To najlepsza oecna jaką mogłeś dostać" << endl;
    }
    else if (points>=51 || points<0)
    {
        cout << "Coś Ci się pomyliło, wpisz poprawną wartość" << endl;
    }
    return 0;
}