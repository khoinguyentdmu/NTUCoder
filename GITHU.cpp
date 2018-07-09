#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long s=n;
    while (--n)
    {
        s*=n;
    }
    cout<<s;
    return 0;
}