#include <bits/stdc++.h>
using namespace std;

int sumCommonDivisor(int n)
{
    int sz= n/2, res= 1;
    for (int i=2; i<=sz; i++)
    {
        if (n%i==0)
            res+=i;
    }
    return res;
}

int main()
{
    int a, b;

    cin>>a>>b;

    (a==sumCommonDivisor(b) && b==sumCommonDivisor(a))?cout<<"YES":cout<<"NO";

    return 0;
}
