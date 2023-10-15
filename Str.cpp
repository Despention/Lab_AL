#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '[' && closing == ']') ||
           (opening == '{' && closing == '}');
}

bool isBalanced(string s) {
    stack<char> stack;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (stack.empty() || !isMatchingPair(stack.top(), c)) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isBalanced(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
