#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;

        int p=a-b,q=a+b,r=c-d,s=c+d;
        a=p;
        b=q;
        c=r;
        d=s;
        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        
        bool flag=false;
        if((a==0 &&b==0) || (c==0 && d==0))
            flag=true;
        for(int i=a;i<=b && !flag;i++)
        {
            if(i*n>=c && i*n<=d)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"Yes\n";
        else
        {
            cout<<"No\n";
        } 
        /*
        double t1=(double)c/(double)n;
        double t2=(double)d/(double)n;
        
        if(t1>=(double)a && t1<=(double)b || t2>=(double)a && t2<=(double)b)
            cout<<"Yes\n";
        else cout<<"No\n";
        */
        
        

    }

    return 0;
}