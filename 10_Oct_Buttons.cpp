#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c,k;
        cin >> a >> b >> c;

        k = c/2;
        a=a+c-k;
        b=b+k;

        if (a>b) cout <<"First" <<endl;
        else cout << "Second" << endl;
    }
    return 0;
}

