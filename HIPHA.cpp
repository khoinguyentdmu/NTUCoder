#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        if (temp==1) cnt++;
    }
    cout<<abs(n-2*cnt);
    return 0;
}
