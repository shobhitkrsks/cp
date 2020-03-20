#include <stdio.h> 
#include<conio.h>
#include<string.h>
#define MAX 15 
int main() 
{ 
    // char buf[MAX]; 
    // fgets(buf, MAX, stdin); 
    // printf("string is: %s\n", buf); 
  
    // return 0; 

    char str[1024]="Hello World";
char tmp[2]="a";

strcat(str, tmp);

printf("%s %s",str,tmp);
return 0;
}