#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct coupon
{
    int c,l,d;
};

bool compfun(coupon c1,coupon c2)
{
    if(c1.l!=c2.l)
        return c1.l<c2.l;
    else
    {
        if(c1.d!=c2.d)
            return c1.d>c2.d;
        else
        {
            return c1.c<=c2.c;
        }   
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;   
        coupon c[n];
        int city,level,dis;
        for(int i=0;i<n;i++)
        {
            cin>>city>>level>>dis;
            c[i].c=city;
            c[i].l=level;
            c[i].d=dis;
        }

        sort(c,c+n,compfun);

        int l1=0,l2,l3;
        int i=0;
        while(c[i++].l==1);
        l2=i-1;
        while(c[i++].l==2);
        l3=i-1;

        printf("%d %d\n%d %d\n%d %d\n",c[l1].d,c[l1].c,c[l2].d,c[l2].c,c[l3].d,c[l3].c);
    }
    return 0;
}

