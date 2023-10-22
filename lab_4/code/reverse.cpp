#include <iostream>
using namespace std;

void reversePrint(int N) {
    if (N == 0) {
        return;
    }

    int x;
    cin >> x;
    reversePrint(N - 1);
    cout << x << " ";
}

int main() {
    int N;
    cin >> N;
    
    reversePrint(N);
    cout << endl;

    return 0;
}
