#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=9) //checking for 9's
        {
            flag=1;
            break;
        }
    }

    if(!flag) //all 9's
    {
        cout<<1;
        for(int i=0;i<n-1;i++)
            cout<<0;
        cout<<1<<endl;
    }
    else
    {
        int p=n/2 - 1;
        int q=n/2;       
        while (a[p]==a[q] && p!=-1)
        {
            p--;
            q++;
        }

        if(p==-1)
        {
            if(p%2==0)
            {
                int r=n/2-1;
                int s=n/2;
            }
            int result[n];
            int carry=0;

            while (p--)
            {
                /* code */
            }
            
        }        
    }
    

}