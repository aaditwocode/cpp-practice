#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumEven = 0;
    int sumOdd = 0;

    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }
        n = n / 10;
    }

    cout << sumEven << " " << sumOdd << endl;

    return 0;
}
