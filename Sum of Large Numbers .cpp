#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,m,d,n,MOD=1000000007,i,j,array[100000+10],p,q,sum=0,cnt1=0,cnt,cnt2=0,cnt3=0,flag=0,ans=0,minx,maxx;
    long long int it,st,ct,qt;
    string str,ptr;
    vector<long long int> veci;
    vector<char>vecc;
    vector<string>vecs;
    queue<long long int>vecq;
    set<long long int>si;
    cin >> n >> m;
    for (i = m; i <= n+1; i++)
    {
         minx = (i *(i - 1)) / 2;
         maxx = (i*n) - minx;
        //cout << minx << ":" << maxx << endl;
        ans += (maxx - minx + 1) % MOD;
    }
    cout << ans % MOD << endl;
    return 0;
}

