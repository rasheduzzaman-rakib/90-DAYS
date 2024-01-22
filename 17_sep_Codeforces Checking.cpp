#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    char c;
    cin >> t;
    while (t--) {
        string s = "codeforces";
        cin >> c;
        bool exist = false;
        for (char ch : s) {
            if (tolower(ch) == tolower(c)) {
                exist = true;
                break;
            }
        }
        if (exist) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

