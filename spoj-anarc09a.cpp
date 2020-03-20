#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    int n=1;
    char c[2500];
    do
    {
        scanf("%s",c);

        if(c[0]=='-')
            break;
        
        else
        {
            int l=strlen(c);
            int s=0,cg=0;

            for(int i=0;i<l;i++)
            {
                if(c[i]=='{')
                    s++;
                else
                {
                    if(s==0)
                    {
                        s=1;
                        cg++;
                    }
                    else
                    {
                        s--;
                    }
                    
                }
            }

            printf("%d. %d\n",n,cg+s/2);

        }
        n++;
        
     } while(c[0]!='-');
    



    return 0;
}