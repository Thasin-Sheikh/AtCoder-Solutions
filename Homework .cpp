#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,array[100000+10],p,q,sum=0,cnt1=0,cnt,cnt2=0,cnt3=0,flag=0;
    long long int it,st,ct,qt;
    string str,ptr;
    vector<long long int> veci;
    vector<char>vecc;
    vector<string>vecs;
    queue<long long int>vecq;
    set<long long int>si;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>array[i];
        sum=sum+array[i];
    }
    if(sum>n)
        cout<<-1<<endl;
    else cout<<n-sum<<endl;




    return 0;
}
