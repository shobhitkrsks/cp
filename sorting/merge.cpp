#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void swap(int *a, int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void takeip(int *ar, int n)
{
    for(int i=0;i<n;i++)
        cin>>ar[i];
}

void sort(int *ar, int l, int r)
{
    int n=r-l+1;

    if(n<=1)
        return;

    if(n==2)
    {
        if(ar[l]>ar[r])
            swap(&ar[l],&ar[r]);

        return;
    }
    else
    {
        sort(ar,l,l+n/2);
        sort(ar,l+1+n/2,r);

        int tr[n];
        int bound1=l+n/2,bound2=r;
        int cur1=l,cur2=l+1+n/2;
        int count=0;
        while(cur1<=bound1 && cur2<=bound2)
        {
            if(ar[cur1]<=ar[cur2])
                tr[count++]=ar[cur1++];
            else
                tr[count++]=ar[cur2++];
        }

        while(cur1<=bound1)
            tr[count++]=ar[cur1++];

        while(cur2<=bound2)
            tr[count++]=ar[cur2++];

        for(int i=l;i<=r;i++)
            ar[i]=tr[i-l];
    }

    return;
    
}

void print(int *ar, int n)
{
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";

    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;

    int *ar=new int[n];
    
    takeip(ar,n);

    sort(ar,0,n-1);

    print(ar,n);

    return 0;
}