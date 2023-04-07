#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans;
    string s1,s2,s3;
    cin>>s1>>s2;
    cin>>a>>b;
    cin>>s3;
    if(s3==s1)
    {
        ans=a-1;
        cout<<ans<<" "<<b<<endl;
    }
    else
    {
        ans=b-1;
        cout<<a<<" "<<ans<<endl;
    }
}
