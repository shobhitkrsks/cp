#include <stdio.h> 
#include<conio.h>
#include<string.h>
#define MAX 15 
int main() 
{
    int i=-5;
    while(i<=5)
    {
        if(i>=0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("hii\n");
        
    }
}