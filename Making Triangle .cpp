///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    ll ans=0;
    set<pair<ll,pair<ll,ll>>>st;
    //cout<<mp[10]<<endl;
    for(i=1; i<=n-2; i++)
    {
        for(j=i+1; j<=n-1; j++)
        {
            for(k=j+1; k<=n; k++)
            {
                if(aarray[i]+aarray[j]>aarray[k]&&aarray[j]+aarray[k]>aarray[i]&&aarray[i]+aarray[k]>aarray[j])
                {
                    if(aarray[i]!=aarray[j]&&aarray[j]!=aarray[k]&&aarray[i]!=aarray[k])
                    ans++;

                }
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}


