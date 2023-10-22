#include <iostream>
#include <string>
using namespace std;

string letter_abbreviation(const string& str) {
    if (str.length() <= 1) {
        return str;
    }

    if (str[0] == str[str.length() - 1]) {
        return letter_abbreviation(str.substr(1, str.length() - 2));
    } else {
        string first = string(1, str[0]);
        string middle = letter_abbreviation(str.substr(1, str.length() - 2));
        string last = string(1, str[str.length() - 1]);
        return first + middle + last;
    }
}

int main() {
    string input;
    cin >> input;
    string result = letter_abbreviation(input);
    cout << result << endl;

    return 0;
}