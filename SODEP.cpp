#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s=0;
    cin>>n;

    while (n>0)
    {
        s+=n%10;
        n/=10;
    }

    (s%10==9)?cout<<"YES":cout<<"NO";

    return 0;
}
