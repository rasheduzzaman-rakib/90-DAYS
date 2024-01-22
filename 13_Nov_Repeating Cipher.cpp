#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, j=2;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0 ; i < n ;)
    {
        cout << s.at(i);
        i = i + j;
        j++;

    }
    cout << endl;
    return 0;
}
