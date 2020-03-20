#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char t[50],m[50],r[50];
        scanf("%s\n%s",t,m);
        
        int lt=strlen(t);
        int lm=strlen(m);
        
        bool p[26];
        memset(p,0,sizeof(p));
        int i;
        
        for(i=0;i<lm;i++)
            p[m[i]-'a']=1;
            
        int k=0;
        
        for(i=0;i<lt;i++)
        {
            if(p[t[i]-'a']) {}
            else
            {
                r[k++]=t[i];
            }
        }
        
        r[k]='\0';
        printf("%s\n",r);
    }
}
