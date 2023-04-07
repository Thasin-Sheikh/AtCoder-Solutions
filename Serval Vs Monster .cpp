#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,a,ans;
    cin>>h>>a;
    if(a>h)
        cout<<1<<endl;
    else
    {
        ans=h/a;
        if(h%a==0)
            cout<<ans<<endl;
        else
            cout<<ans+1<<endl;
    }

}
