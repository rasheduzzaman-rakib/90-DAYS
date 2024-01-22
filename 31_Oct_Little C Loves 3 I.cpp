#include<iostream>
using namespace std;

int main()
{
    long long int n,a,b,c;
    cin>>n;
    if( (n - 2) % 3 == 0) {
            a = 1,b = 2,c =(n - 3);
        }
    else{
            a = 1, b = 1,c =(n - 2);
        }
    cout<<a<<" "<<b<<" "<<c;

    return 0;
}

