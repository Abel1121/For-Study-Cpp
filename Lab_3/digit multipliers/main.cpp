#include <iostream>

    using namespace std;
int number;
int howMany;
int zero = 0;
int main() {
    cout << "Witaj, jaką cyfrę chcesz zwielokrotnić?" << endl;
    cin >> number;
    cout << "I ile razy?" << endl;
    cin >> howMany;
    cout << "Ta wielekrotność będzie wynosić: ";
    for (int i = 0; i <= howMany*number; i+=number )
    {
         cout << i << " ";
    }
    return 0;
}