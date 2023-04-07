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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    ll sum=0;
    n=str.length();
    for(i=0;i<n;i++)
    {
        sum+=str[i]-'0';
    }
    if(sum%3==0)
    {
        cout<<0<<"\n";
        return 0 ;
    }
    t=sum%3;
    for(i=0;i<n;i++)
    {
        k=str[i]-'0';
        if(k%3==t&&n>1)
        {
            cout<<1<<"\n";
            return 0 ;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            ll ad;
            ad=str[i]-'0';
            ad+=str[j]-'0';
            if(ad%3==t&&n>2)
            {
                cout<<2<<"\n";
                return 0 ;
            }
        }
    }
    cout<<-1<<"\n";
    return 0;
}

