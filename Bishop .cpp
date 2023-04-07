#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,c,ans=0,pro;
    cin>>r>>c;
    if(r==1||c==1)
    {
        cout<<1<<endl;
        return 0;
    }
    pro=r*c;
    if(pro%2==0)
        ans=pro/2;
    else
        ans=(pro/2)+1;
    cout<<ans<<endl;

}
