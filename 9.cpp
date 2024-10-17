#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int FirstDigit = number/100;
    int SecondDigit = (number/10)%10;
    int ThirdDigit = number%10;
    cout << FirstDigit+SecondDigit+ThirdDigit;
    
    return 0;
}

// I.