#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int hypotenyse = pow(a,2) + pow(b,2);
    cout << sqrt(hypotenyse);
    return 0;
}