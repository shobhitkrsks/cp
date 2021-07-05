#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define N 9
#define EMPTY 0
using namespace std;

bool FindUnassignedLocation(int **ar, int &row, int& col)
{
    for(row=0; row<N; row++)
        for(col=0; col<N; col++)
            if(ar[row][col]==EMPTY)
                return true;

    return false;
}

bool UsedInRow(int **ar, int row, int num)
{
    for(int i=0;i<N;i++)
    {
        if(ar[row][i]==num)
            return true;
    }

    return false;
}

bool UsedInCol(int **ar, int col, int num)
{
    for(int i=0;i<N;i++)
    {
        if(ar[i][col]==num)
            return true;
    }

    return false;
}

bool UsedInBox(int **ar, int rowStart, int colStart, int num)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[rowStart+i][colStart+j]==num)
                return true;
        }
    }

    return false;
}

bool IsSafe(int **ar, int row, int col, int num)
{
    return !UsedInRow(ar,row,num) && !UsedInCol(ar,col,num) && !UsedInBox(ar,row-row%3,col-col%3,num) && ar[row][col]==EMPTY;
}

bool SolveSudoku(int **ar)
{
    int row, col;

    if(!FindUnassignedLocation(ar,row,col))
        return true;

    for(int num=1; num<=N; num++)
    {
        if(IsSafe(ar,row,col,num))
        {
            ar[row][col]=num;
            
            if(SolveSudoku(ar))
                return true;

            ar[row][col]=EMPTY;
        }
    }

    return false;
}

void PrintSudoku(int **ar)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<ar[i][j]<<" ";

        cout<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int **ar = new int* [N];
    for(int i=0;i<N;i++)
        ar[i] = new int[N];

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>ar[i][j];


    if(SolveSudoku(ar)==true)
        PrintSudoku(ar);
    else
    {
        cout<<"No Solution\n";
    }
    
    
    return 0;
}