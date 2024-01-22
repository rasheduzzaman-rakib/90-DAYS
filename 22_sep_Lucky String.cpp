#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    char c='a',ch;
    while(n--)
    {
        if(count==4)
            count=0;
        ch=c+count;
        cout<<ch;
        count++;
    }
    cout<<endl;
    return 0;
}
