#include <iostream>

    using namespace std;
int hour;
int main() {
    cout << "Ahoooy, ile nocy chcesz przenocować i spradzę ile cię to będzie kosztować" << endl;
    cin >> hour;
    if(hour>0 && hour<=3)
    {
        cout << hour << " doby hotelowe będą Cię kosztować " << hour*120 << "zł." << endl;
    }
    else if (hour>3 && hour<=6)
    {
        cout << hour << " doby hotelowe będą Cię kosztować " << (3*120)+((hour-3)*120)*0.9 << "zł." << endl;
    }
    else if (hour>6)
    {
        cout << hour << " dób hotelowych będą Cię kosztować " << (3*120)+(3*108)+((hour-6)*96) << "zł." << endl;
    }
    return 0;
}
