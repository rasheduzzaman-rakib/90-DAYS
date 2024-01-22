#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string x;
        cin >> x;
        int ln = x.length();
        if (ln <= 10)
            {
                cout << x << endl;
            }
        else
        {
            cout << x[0] << ln - 2 << x[ln - 1] << endl;
        }
    }
    return 0;
}
