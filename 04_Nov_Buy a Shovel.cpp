#include<iostream>
using namespace std;
int main()
{
    int p,q,r;
    cin>>p>>q;
        for(int i=1;true;i++){
        if((p*i)%10==0 || (p*i)%10==q)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
