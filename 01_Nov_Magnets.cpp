#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, group=1;
    string mag1, mag2;
    cin>>n;
    cin>>mag1;
    for(int i=1;i<n;i++){
        cin>>mag2;
        if(mag1[1]==mag2[0]) group++;
        mag1=mag2;
    }
    cout<<group<<endl;

    return 0;
}
