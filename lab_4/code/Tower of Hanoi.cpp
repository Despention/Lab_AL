#include <iostream>
using namespace std;

void Hanoi(int n, int A, int B, int C) {
    if (n == 1) {
        cout << "1 " << A << " " << C << endl;
        return;
    }

    Hanoi(n - 1, A, C, B);
     cout << n << " " << A << " " << C << endl;
    Hanoi(n - 1, B, A, C);
}

int main() {
    int n;
    cin >> n;

    Hanoi(n, 1, 2, 3);

    return 0;
}
