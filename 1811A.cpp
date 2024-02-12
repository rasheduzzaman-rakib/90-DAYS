#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i=0;
        char d;
        string s;
        cin>>n>>d>>s;
        while(i<n && s[i]>=d) i++;
        s.insert(i,1,d);
        cout<<s<<endl;

    }
}