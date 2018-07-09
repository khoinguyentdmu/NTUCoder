#include <iostream>
#include <math.h>
using namespace std;

bool ktnt(long long n)
{
    if (n<2) return false;
    int sqrtN= sqrt(n);
    for (int i=2; i<=sqrtN; i++)
        if (n%i==0) return false;
    return true;
}

int main()
{
    long long n;
    cin>>n;
    cout<<(ktnt(n)?"YES":"NO");
    return 0;
}