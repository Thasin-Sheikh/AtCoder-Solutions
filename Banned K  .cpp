#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,c,i,j,n,sum=0,pro,minn=INT_MAX,maxn=INT_MIN,ans=0;
    cin>>n;
    vector<long long int > count(n+1,0);
    vector<long long int> arr(n);
    for(int i=0; i<n; ++i)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    for(int i=1; i<=n; ++i)
    {
        ans+= (count[i]*(count[i]-1))/2;
    }
    for(int i=0; i<n; ++i)
    {
        if (count[arr[i]]<2)
            cout << ans <<endl;
        else
            cout << ans - count[arr[i]]+1 <<endl;
    }
    return 0;

}
