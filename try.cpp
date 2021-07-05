#include<iostream>
#include<fstream>
using namespace std;

#define N 101
#define ITR 1000000
bool A[N];
bool R[ITR];

void printA()
{
    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";

    cout<<"\n";
}

void initialiseA()
{
    for(int i=0;i<N/2;i++)
        A[i]=0;

    A[N/2]=1;

    for(int i=(N/2)+1;i<N;i++)
        A[i]=0;
}

inline bool applyRule30Formula(bool a, bool b, bool c)
{
    return ( (!a) && (b^c) ) || ( a && (!c) ); //Rule 30 = A'(B XOR C) + AC'
}

void applyRule30()
{
    bool a,b,c,r;
    bool temp[N];
    
    a=A[N-1];
    b=A[0];
    c=A[1];

    r=applyRule30Formula(a,b,c);
    temp[0]=r;

    for(int i=1;i<N-1;i++)
    {
        a=A[i-1];
        b=A[i];
        c=A[i+1];

        r=applyRule30Formula(a,b,c);
        temp[i]=r;
    }

    a=A[N-2];
    b=A[N-1];
    c=A[0];

    r=applyRule30Formula(a,b,c);
    temp[N-1]=r;

    for(int i=0;i<N;i++)
        A[i]=temp[i];
}

int main()
{
    initialiseA();

    // printA();

    for(int i=0;i<ITR;i++)
    {
        R[i]=A[N/2];
        applyRule30();
    }

    char c = 0;
    int j = 0;

    fstream fout;

    fout.open("prng_using_rule30_binary_output.bin",  fstream::in | fstream::out | fstream::trunc | ios::binary);

    while(j<ITR)
    {
        c = (c<<1)|R[j];
        j++;

        if(j%8 == 0)
        {
            fout<<c;
            c = 0;
        }
    }
    fout.close();

    cout<<"\n***Completed!***\n\n";

    return 0;        
}