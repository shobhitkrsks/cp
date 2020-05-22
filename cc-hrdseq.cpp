#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int list[131];
    for(int i=0;i<=130;i++)
        list[i]=-1;
    
    int ar[130];
    ar[0]=0;
    for(int i=0;i<129;i++)
    {
        if(list[ar[i]]==-1)
        {
            ar[i+1]=0;
            list[ar[i]]=i;
        }
        else
        {
            ar[i+1]=i-list[ar[i]];
            list[ar[i]]=i;
        }
    }
    for(int i=0;i<130;i++)
        cout<<ar[i]<<" ";
}

