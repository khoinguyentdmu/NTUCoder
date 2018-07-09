#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    int t;
    while (true)
    {
        t= a%b;
        if (t==0) break;
        a=b;
        b=t;
    }
    return b;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<ucln(a, b);
    return 0;
}