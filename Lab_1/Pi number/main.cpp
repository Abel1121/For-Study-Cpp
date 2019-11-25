#include <iostream>

    using namespace std;
float piNumber = 3.14;
float r;
float p0;
float obw;
int main() {
    cout << "ELO!" << endl;
    cout << "Słyszałem, że fascynują Cię kółka" << endl;
    cout << "Policzmy parę kółek" << endl;
    cout << "Podaj promień pierwszego koła" << endl;
    cin >> r;                   // W wolnym czasie
    p0 = piNumber*(r*r);        // zamienię to
    obw = 2*piNumber*r;         // na funkcję
    cout << "Jego obwód wynosi: "<< p0 <<" ,a jego pole to: "<< obw << endl;
    cout << "Dawaj promień drugiego koła" << endl;
    cin >> r;                   // W wolnym czasie
    p0 = piNumber*(r*r);        // zamienię to
    obw = 2*piNumber*r;         // na funkcję
    cout << "Jego obwód wynosi: "<< p0 <<" ,a jego pole to: "<< obw << endl;
    cout << "Latwizna!!"<< endl;
    cout << "Dawaj promień trzeciego koła" << endl;
    cin >> r;                   // W wolnym czasie
    p0 = piNumber*(r*r);        // zamienię to
    obw = 2*piNumber*r;         // na funkcję
    cout << "Jego obwód wynosi: "<< p0 <<" ,a jego pole to: "<< obw << endl;
    return 0;
}