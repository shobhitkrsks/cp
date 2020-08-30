#include<bits/stdc++.h>
using namespace std;


char *encode(char *src)
{
    char cur=src[0];
    int cnt=1;
    char resstr[10000];
    int rescnt[10000];
    int k=0;
    int sl=strlen(src);
    for(int i=1;i<sl;i++)
    {
        if(src[i]!=cur)
        {
            resstr[k]=cur;
            cur=src[i];
            
            rescnt[k]=cnt;
            cnt=1;
            
            k++;
        }
        else
        {
            cnt++;
        }
    }
    
    resstr[k]=cur;
    rescnt[k]=cnt;
    k++;
    
    char res[10000];
    int l=0;
    for(int i=0;i<k;i++)
    {
        res[l]=resstr[i];
        l++;
        
        char temp[10];
        int tl=0;
        while(rescnt[i]!=0)
        {
            int rem=rescnt[i]%10;
            temp[tl++]='0'+rem;
            
            rescnt[i]/=10;
        }
        
        for(int j=tl-1;j>=0;j--)
        {
            res[l++]=temp[j];
        }
    }
    res[l++]='\0';
    
    char *p=&res[0];

    return p;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        cout<<encode(str)<<endl;
    }
}