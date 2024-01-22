#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        int sum1=0, sum2=0, i;
        cin >> n;
        if (n.length() != 6) {
            cout << "NO" << endl;
            continue;
        }
        for (i = 0; i < 3; i++) {
            sum1 = sum1 + n[i] - '0';
        }

        for (i = 3; i < 6; i++) {
            sum2 = sum2 + n[i] - '0';
        }

        if (sum1 == sum2) {
            cout << "YES" << endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

