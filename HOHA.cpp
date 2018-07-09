#include <iostream>
#include <math.h>
using namespace std;

bool chk(int n)
{
    int s=1;
    int sqrtN= sqrt(n);
    for (int i=2; i<=sqrtN; i++)
        if (n%i==0)
            s+=n/i+i;
    return s==n;
}

int main()
{
    int n;
    cin>>n;
    cout<<(chk(n)?"YES":"NO");
    return 0;
}