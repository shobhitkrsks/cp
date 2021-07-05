#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'solveMinimumEqualSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY listA
 *  2. INTEGER_ARRAY listB
 */

int solveMinimumEqualSum(vector<int> listA, vector<int> listB) {
    int nA=listA.size(), nB=listB.size();
    int sumA=0, cntA=0, sumB=0, cntB=0;
    
    for(int i=0;i<nA;i++)
    {
        if(listA[i]==0)
            cntA++;
            
        sumA+=listA[i];
    }
    
    for(int i=0;i<nB;i++)
    {
        if(listB[i]==0)
            cntB++;
            
        sumB+=listB[i];
    }
    
    if(cntA==0 && cntB==0)
    {
        if(sumA==sumB)
            return sumA;
            
        else
            return -1;
    }
    
    if(cntB==0)
    {
        if(sumA+cntA>sumB)
            return -1;
        else {
            return sumB;
        }
    }
    
    if(cntA==0)
    {
        if(sumB+cntB>sumA)
            return -1;
        else {
            return sumA;
        }
    }
    
    if(sumA==sumB)
    {
        if(cntA==cntB)
            return sumA+cntA;
        else {
            return max(sumA+cntA, sumB+cntB);
        }
    }
    
    if(cntA==cntB)
    {
        return max(sumA+cntA, sumB+cntB);    
    }
    
    if(sumA<sumB)
    {
        if(cntA<cntB)
        {
            return sumB+cntB;
        }
        else {
            if(sumB+cntB-sumA>=cntA)
                return sumB+cntB;
            else {
                return sumA+cntA;
            }
        }
    }
    
    if(sumB<sumA)
    {
        if(cntB<cntA)
        {
            return sumA+cntA;
        }
        else {
            if(sumA+cntA-sumB>=cntB)
                return sumA+cntA;
            else {
                return sumB+cntB;
            }
        }
    }
    
    return -1;
}
int main() {
    
}