//Radhe Radhe
#include<bits/stdc++.h>
#define FASTIO_  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

#define mod 1000000007
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define itr(i,n)    for(ll i=0; i<n; i++)
#define itr_ab(i,a,b)    for(ll i=a; i<=b; i++)
#define itrV(i,n)    for(ll i=0; i<v.size(); i++)
#define fixed cout.setf(ios::fixed);
#define precise cout.precision(15);
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define en '\n'

using namespace std;

bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.fi<b.fi;
}


int main()
{
    FASTIO_
    ll  tc,n,m,x,y,z,i,j,k;
    string s,t;
    tc=1;
    while(tc--)
    {
        ll n,w;
        cin>>n>>w;
        ll wt[n+1],vl[n+1];
        vector<pair<ll,ll>>v;
        for(i=1; i<=n; i++)
        {
            cin>>wt[i]>>vl[i];
            //cin>>x>>y;
            //v.pb(mp(x,y));
        }




        ll a[n+1][w+1];
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=w; j++)
            {
                if(!i||!j)
                {
                    a[i][j]=0;
                }
                else
                {
                    if(wt[i]<=j)
                    {
                        ll cur=0,prev=a[i-1][j];
                        cur=vl[i];
                        cur+=a[i-1][j-wt[i]];
                        a[i][j]=max(prev,cur);
                    }
                    else
                    {
                        // ll cur=v[i].se,prev=a[i-1][j];
                        // a[i][j]=max(prev,cur);
                        ll prev=a[i-1][j];
                        a[i][j]=prev;
                    }
                }
            }
            //cout<<en;
        }
        /*for(i=0; i<=n; i++)
        {
            for(j=0; j<=w; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }*/
        cout<<a[n][w]<<"\n";
    }

    return 0;
}





