#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

        int ar[8][8];
        memset(ar,0,sizeof(ar));

        if(n%8!=0)
        {
            for(int i=n%8;i<8;i++)
            {
                ar[(n/8)][i]=-1;
            }
        }

        if(n/8!=7 && n/8!=8)
        {
            if(n%8!=0)
            {
                for(int i=0;i<=n%8;i++)
                {        
                    ar[int(ceil((double)n/8))][i]=-1;
                }
            }
            else
            {
                for(int i=0;i<8;i++)
                {
                    ar[int(ceil((double)n/8))][i]=-1;
                }
            }
        }
        else if(n/8==7 && n%8==0)
        {
            for(int i=0;i<8;i++)
            {
                ar[7][i]=-1;
            }
        }

        ar[0][0]=1;

        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                switch(ar[i][j])
                {
                    case 0:
                        cout<<".";break;
                    case -1:
                        cout<<"X";break;
                    case 1:
                    cout<<"O";break;
                }
            }
            cout<<"\n";
        }


        

    }
	return 0;
}
