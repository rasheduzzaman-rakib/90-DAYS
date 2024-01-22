#include<iostream>
#include<string>
using namespace std;

int main()
{
long long int n;
int count=0;
cin>>n;
string s;
s=to_string(n);

for(int i=0; i<s.size(); i++)
{
    if(s[i]=='4' || s[i]=='7' )
        {
            count ++;
        }
}
if(count==4 || count==7)
    {
        cout<<"YES"<<endl;
    }
else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

