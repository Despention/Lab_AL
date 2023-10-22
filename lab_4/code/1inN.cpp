#include <iostream>

using namespace std;

bool canReachN(int current, int N, int step1, int step2) {
    if (current == N) {
        return true;
    }
    if (current > N) {
        return false;
    }

    return canReachN(current + step1, N, step1, step2) || canReachN(current + step2, N, step1, step2);
}

int main() {
    int N;
    cin >> N;

    int step1 = 3; 
    int step2 = 5; 

    if (canReachN(1, N, step1, step2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
