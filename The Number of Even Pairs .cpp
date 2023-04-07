#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n,t,m,ans,npr1,npr2,ncr1,ncr2;
    //int minirow=INT_MAX,minicol=INT_MAX,maxrow=INT_MIN,maxcol=INT_MIN;
    //int i,j;
    //string s[100],p;
    //char ch;
    cin>>n>>m;
    npr1=n*(n-1);
    ncr1=npr1/2;
    npr2=m*(m-1);
    ncr2=npr2/2;
    //cout<<npr1<<endl;
    //cout<<ncr1<<" "<<ncr2<<endl;
    ans=ncr1+ncr2;
    cout<<ans<<endl;

}
