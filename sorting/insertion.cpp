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
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=ar[i];
        while(j>=0 && ar[j]>key)
        {
            ar[j+1]=ar[j];
            j--;
        }

        ar[j+1]=key;
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