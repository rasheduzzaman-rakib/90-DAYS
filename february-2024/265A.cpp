#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    int k=1;
    cin>>s>>t;
    int j=0;
    
    for( int i=0; i<=t.size(); i++)
    {
        if(s[j]==t[i])
        {
            k++;
            j++;
        }
    }
    cout<<k<<endl;
    return 0;
}