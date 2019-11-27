#include <iostream>

    using namespace std;
int number1;
int number2;
int number3;
int number4;
int number5;
int sum = 1+2+3+4+5;
int maxSum;
int main() {
    cout << "Hello, podaj mi swoje cyferki a sprawdzę czy ich suma jest większa niż maksymalna suma" << endl;
    cout << "Cyfra pierwsa" << endl;
    cin >> number1;
    cout << "Cyfra druga" << endl;
    cin >> number2;
    cout << "Cyfra trzecia" << endl;
    cin >> number3;
    cout << "Cyfra czwarta" << endl;
    cin >> number4;
    cout << "Cyfra piąta" << endl;
    cin >> number5;
    cout << "Maksymalna suma cyfr to:" << endl;
    cin >> maxSum;

    if (sum>maxSum){
        cout << "Suma cyfr jest zbyt potężna" << endl;
    }
    cout << "Ich suma to: " << sum << endl;
    return 0;
}