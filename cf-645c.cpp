#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int fn[1000000],fd1[1000000],fd2[1000000];


void factorial(int *res,int n) 
{ 
  
    // Initialize result 
    res[0] = 1; 
    int res_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    cout << "Factorial of given number is \n"; 
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
} 

int multiply(int x, int *res, int res_size) 
{ 
    int carry = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
  
        // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        memset(fn,0,sizeof(fn));
        memset(fd1,0,sizeof(fn));
        memset(fd2,0,sizeof(fn));

        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;

        if((x1==x2 && y1==y2) || (x2-x1==0) || (y2-y1)==0 )
            cout<<"1\n";

        else
        {
            ll r=x2-x1;
            ll d=y2-y1;

            factorial(fn,r+d);
            factorial(fd1,r);
            factorial(fd2,d);

        }
        
    }

    return 0;
}