#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s1,string s2,ll k)
{
    ll l1=s1.length();
    ll l2=s2.length();

    double t1 = (double)l2*(double)l2 + 4*(double)k*((double)l1+(double)l2);
    t1-= (double)l2;
    t1/= 2*((double)l1+(double)l2);
    double srt = sqrt(t1);

    ll n=(ll) srt;
    
    n--;
    k-=(n*n)*l1;
    k-=(n*n+n)*l2;

    if(k>(2*n+1)*l1)
    {
        k-=(2*n+1)*l1;
        k++;
        k%=l2;
        cout<<s2[k]<<"\n";
    }
    else
    {
        k++;
        k%=l1;
        cout<<s1[k]<<"\n";
    }
    


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--)
    {
        ll k;
        string s1,s2;
        s1="a";
        s2="bc";
        // cin>>s1>>s2;
        // cin>>k;
        k=4;

        cout<<s1<<" "<<s2<<" "<<k<<endl;
        solve(s1,s2,k);

    }

    return 0;
}