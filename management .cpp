#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,q,sum=0,cnt1=0,cnt,cnt2=0,cnt3=0,flag=0;
    long long int it,st,ct,qt;
    string str,ptr;
    vector<long long int> veci;
    vector<char>vecc;
    vector<string>vecs;
    queue<long long int>vecq;
    set<long long int>si;
    cin>>n;
    vector<long long int> count(n+1,0);
    for(i=1; i<n; i++)
    {
        cin>>a;
        //veci.push_back(a);
        count[a]++;
    }
    for(i=1;i<=n;i++)
        cout<<count[i]<<endl;




    return 0;
}

