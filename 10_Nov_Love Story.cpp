#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0, i;
        string codeforces="codeforces";
        for(i=0;i<10;i++)
    {
        if(s[i]==codeforces[i]) {
            continue;
        }
        else {
            a=a+1;
        }
    }
    cout<<a<<endl;
   }
}
