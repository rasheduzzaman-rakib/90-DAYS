#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string k;
    cin>>k;
    char a='a';
    char b='b';
    char c='c';
    int i;
    for (i=0;i<3;i++)
    {
        if(k[0]==a)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(k[1]==b)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(k[2]==c)
        {
            cout<<"YES"<<endl;
            break;
        }
        else
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    }
    return 0;
}

