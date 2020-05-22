#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define m 1000000007

int expo(int x, int y) 
{ 
    long long temp; 
    if( y == 0) 
        return 1; 
    temp = expo(x, y/2)%m; 
    if (y%2 == 0) 
        return (temp*temp)%m; 
    else
        return (x*temp*temp)%m; 
} 

int main()
{
    double d=1.5;
    double rem=d-(int)d;
    rem-=0.5;
    if(rem==0)
        cout<<rem;
}