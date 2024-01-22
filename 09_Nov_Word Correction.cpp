#include<iostream>
using namespace std;

int main()
{
    int m,n,i,k;
    cin>>n;

    char c[n],s[n];
    for(i=0; i<n; i++)
    {
        cin>>c[i];
    }
    int j=0;
    cout<<c[0];
        for(i=1; i<n; i++,j++)
        {
            if((c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='y')&&(c[i-1]=='a'||c[i-1]=='e'||c[i-1]=='i'||c[i-1]=='o'||c[i-1]=='u'||c[i-1]=='y'))
               {
                   continue;
               }
            else cout<<c[i];
        }
    return 0;
}
