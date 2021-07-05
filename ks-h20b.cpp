#include<bits/stdc++.h>
using namespace std;
#define ll long long

void tokenizer(int* ar, char *c, int l)
{
    for(int i=0;i<l;i++)
        ar[i]=c[i]-'0';
}

ll findNums(int *ar,int l)
{
    ll sum=1LL;
    for(int i=1;i<=l;i++)
    {
        if(i%2==1)
        {
            int t=5-(ar[i-1]/2);
            sum*=t;
        }
        else
        {
            int t=5-((ar[i-1]+1)/2);
            sum*=t;
        }
        
    }

    return sum;
}

inline ll findNums(int l)
{
    ll t=pow(5,l);
    return t;
}

int main()
{
    int tc;
    cin>>tc;
    int ctc=0;
    while(ctc<tc)
    {
        char l[20],r[20];
        cin>>l>>r;
        int dl,dr;
        dl=strlen(l);
        dr=strlen(r);

        int digl[dl],digr[dr];
        tokenizer(digl,l,dl);
        tokenizer(digr,r,dr);

        ll sum=0LL;

        sum+=findNums(digl,dl);

        for(int i=dl+1;i<=dr-1;i++)
        {
            sum+=findNums(i);
        }

        sum+=findNums(digr,dr);


        ctc++;
    }
    
    return 0;
}