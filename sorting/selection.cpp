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

void sort(int *ar, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minidx=i;
        int minelem=ar[i];
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<minelem)
            {
                minelem=ar[j];
                minidx=j;
            }
        }

        swap(&ar[i],&ar[minidx]);
    }
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

    sort(ar,n);

    print(ar,n);

    return 0;
}