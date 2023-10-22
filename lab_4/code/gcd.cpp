#include <iostream>
using namespace std;

int gcd(int a, int b) {
    for (int i = min(a, b); i >= 1; --i) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1; 
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << result << endl;

    return 0;
}
