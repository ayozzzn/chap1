#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int count = K/N;
    cout << K-(N*count);

    return 0;
}

//D.