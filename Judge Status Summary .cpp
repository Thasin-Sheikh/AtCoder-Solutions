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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    map<string,int>mp;
    cin>>n;
    ll ac=0,tle=0,wa=0,re=0;
    for(i=0;i<n;i++)
    {
        cin>>str;
        if(str=="AC")
            ac++;
        else if(str=="WA")
            wa++;
        else if(str=="TLE")
            tle ++;
        else if(str=="RE")
            re++;
    }
    cout<<"AC"<<" "<<"x"<<" "<<ac<<endl;
    cout<<"WA"<<" "<<"x"<<" "<<wa<<endl;
    cout<<"TLE"<<" "<<"x"<<" "<<tle<<endl;
    cout<<"RE"<<" "<<"x"<<" "<<re<<endl;


    return 0;
}

