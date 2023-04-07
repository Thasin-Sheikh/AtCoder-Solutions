#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a,m,k,l,sum1=0,sum=0,flag,cnt=0,maxn,ans1,ans2,p=0,q=0,minn=INT_MAX,ans=INT_MAX;
    string s;
    char ch;
    vector<long long int>ar;
    cin>>k>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        ar.push_back(a);

    }
    ans=ar[n-1]-ar[0];
    for(i=1; i<n; i++)
    {
        ans=min(ans,k-abs(ar[i]-ar[i-1]));
    }
    cout<<ans<<endl;
    return 0;
}
