///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool divisible[1000001];
ll ccount[1000001];
int main()
{
    makefast__
    string str[100001];
    ll a,c,d,e,f,x,y,t,A=0,B=0,L,j,i,l,r,n,C=0,sum=0,sum1=0,m,k,b;
    vector<pair<ll,ll>>v;
    ll count[10001];
    set<ll>sl;
    vector<ll>ans;
    cin>>n;
    ll one=0;
    memset(ccount,0,sizeof(ccount));
    memset(divisible,true,sizeof(divisible));
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ccount[aarray[i]]++;
        sl.insert(aarray[i]);
        divisible[aarray[i]]=false;
    }
    if(divisible[1]==false&&ccount[1]==1)
    {
        cout<<1<<endl;
        return 0;
    }
    if(divisible[1]==false&&ccount[1]>1)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        ll fx=aarray[i];
        f=1;
        for(j=2; j*j<=fx; j++)
        {
            if(fx%j==0)
            {
                if(!divisible[j])
                {
                    f=0;
                    break;
                }
                ll kala=fx/j;
                if(!divisible[kala])
                {
                    f=0;
                    break;
                }
            }
            if(!f)
                break;
        }
        if(f&&ccount[fx]==1)
        {
            A++;
        }
    }
    cout<<A<<endl;




    return 0;
}


