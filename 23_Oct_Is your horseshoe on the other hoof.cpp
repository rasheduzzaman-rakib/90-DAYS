#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> shoe;
    int c, n=4;
    while(n--)
    {
        cin>>c;
        shoe.insert(c);
    }
    cout<<4-shoe.size();
    return 0;
}

