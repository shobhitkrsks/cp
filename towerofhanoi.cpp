#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void toh(char from, char aux, char to, int n)
{
    if(n==1)
        cout<<"Move disk 1 from "<<from<<" to "<<to<<"\n";
    else
    {
        toh(from, to, aux, n-1);
        cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<"\n";
        toh(aux, from, to, n-1);
    }
    
}

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

        toh('A','B','C',n);
    }

    return 0;
}