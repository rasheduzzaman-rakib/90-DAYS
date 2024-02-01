#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int pos=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='+')
                pos++;
            else
                pos--;
        }
        cout<<abs(pos)<<endl;
    }
    

    return 0;
}