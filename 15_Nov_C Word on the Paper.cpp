#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int i,j;
        char a[8][8];

        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        char s[100];
        char h='.';
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(a[i][j]==h)
                {
                    continue;
                }
                else
                {
                    cout<<a[i][j];
                }
            }
        }
            cout<<endl;
    }


}
