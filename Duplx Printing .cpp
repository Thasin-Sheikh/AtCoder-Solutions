#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,ans=0;
    cin>>a;
    if(a%2==0)
    {
        ans=a/2;
    }
    else

        ans=(a/2)+1;
    cout<<ans<<endl;
}
