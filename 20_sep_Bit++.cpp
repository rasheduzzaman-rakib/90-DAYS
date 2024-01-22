#include <iostream>
using namespace std;

int main()
{
    int n;
    int result = 0;
    char a[4];
    cin >> n;
    while (n--) {
        cin >> a;
        if (a[1] == '+') {
            result++;
        } else {
            result--;
        }
    }
    cout<<result<<endl;
    return 0;
}
