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
        int pivot=l,left=l+1,right=r;

        while(l<r)
        {
            
        }
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