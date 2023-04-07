///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,n,m,k,l,r,ans,sum=0;
    string str,s;
    bool yes=false;
    vector<ll>v;
    cin>>n;
    cin>>str;
    k=10000000000;
    l=n/3;
    if(n%3)
        l++;
    for(i=1; i<=l; i++)
    {
        s+="110";
    }
    //cout<<s<<endl;
    ll c=0;
    for(i=0; i<s.size(); i++)
    {
        if(i+n<=s.size())
        {
            if(s.substr(i,n)==str)
                c++;
        }
    }
    //cout<<c<<" "<<l<<endl;
    if(c>1)
    {
        cout<<k*c<<"\n";
        return ;
    }
    else if(c==1)
    {
        cout<<k-(l-1)<<"\n";
        return ;
    }
    s+="110";
    l++;
    for(i=0; i<s.size(); i++)
    {
        if(i+n<=s.size())
        {
            if(s.substr(i,n)==str)
                c++;
        }
    }
    if(c>1)
    {
        cout<<k*c<<"\n";
        return ;
    }
    else if(c==1)
    {
        cout<<k-(l-1)<<"\n";
        return ;
    }
    else
        cout<<0<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


