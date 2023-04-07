#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,c,i,j;
    string str;
    set<long long int>se;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a;
        for(j=1; j<=a; j++)
        {
            cin>>c;
            se.insert(c);
        }
    }
  cout<<n-se.size()<<endl;
}

