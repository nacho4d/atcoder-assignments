#include <iostream>

using namespace std;

int main(void) {
    int n;
    string words[1000]; // since max is 1000
    bool badWord = false;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
        if (!badWord && i > 0 && words[i - 1].back() != words[i].front()) {
            badWord = true; // last word last char is not same as new word first char
        }
        for (int j = i - 1; !badWord && j >= 0; --j) {
            if (words[i] == words[j]) {
                badWord = true;  // word is already said
                break;
            }
        }
    }

    if (badWord) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    return 0;
}
