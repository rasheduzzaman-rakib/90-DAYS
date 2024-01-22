#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n,m;
    cin>>n;
    int x=n.length();
    for(int i=0; i<x; i++)
    {
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='y' || n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U' || n[i]=='Y' )
        {
            continue;
        }
        else
        {
            m+='.';
            m+=towlower(n[i]);
        }
    }
    cout<<m<<endl;

    return 0;
}


