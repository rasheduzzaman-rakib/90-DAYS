#include <iostream>
#include <string>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        bool flag = true;
        for(i=0; i<n; i++)
        {
            if(s1[i]==s2[i] || (s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G'))
            {
                 flag=true;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
