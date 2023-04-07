#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,n,ans=0,sum;
    cin>>n>>a>>b;
    sum=a+b;
    ans=ans+(n/sum)*a;
    ans=ans+min(a,n%sum);
    cout<<ans<<endl;
}
