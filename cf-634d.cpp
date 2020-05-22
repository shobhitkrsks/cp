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
        string s[9];
        for(int i=0;i<9;i++)
            cin>>s[i];

        int ar[9][9];
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                ar[i][j]=s[i][j]-'0';
            }
        }



        ar[0][1]=ar[0][0];
        ar[1][4]=ar[1][3];
        ar[2][7]=ar[2][6];
        ar[3][0]=ar[3][1];
        ar[4][3]=ar[4][4];
        ar[5][6]=ar[5][7];
        ar[6][2]=ar[7][2];
        ar[7][5]=ar[6][5];
        ar[8][8]=ar[7][8];

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<ar[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}