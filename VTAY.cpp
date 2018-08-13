#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int left = n%7;
    int right = 7 - left;

    if ((n/7)%2==0) swap(left, right);
    cout<<left<<" "<<right;

    return 0;
}
