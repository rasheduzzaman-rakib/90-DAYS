//A - Two Vessels
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,count=0;
        cin>>a>>b>>c;
        float A=max(a,b);
        float B=min(a,b);
        while(A>B)
        {
            count++;
            float sub=A-B;
            if(sub>=c)
            {
                A=A-c;
                B=B+c;
            }
            else
            {
                float sub2=(A-B)/2;
                A=A-sub2;
                B=B+sub2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
