#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        bool flag=false;
        int x;
        for(int i=1;!flag;i++)
        {
            if(n%((2<<i)-1)==0)
            {
                x=n/((2<<i)-1);
                flag=true;
            }
        }
        printf("%d\n",x);

    }

    return 0;
}