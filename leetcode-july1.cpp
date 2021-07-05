#include <bits/stdc++.h>
using namespace std;

void decimalToBin(unsigned int n, bool binArr[])
{
    for(int i=0;i<32;i++)
    {
        binArr[i]=n & 0x00000001;
        n=n>>1;
    }
}

void binToGC(bool binArr[], bool GCArr[])
{
    for(int i=0;i<31;i++)
    {
        GCArr[i]=binArr[i] ^ binArr[i+1];
    }

    GCArr[31] = binArr[31];
}

unsigned int binToDecimal(bool binArr[])
{
    unsigned int n=0x00000000;
    for(int i=0;i<32;i++)
    {
        n=n<<1;
        n |= binArr[31-i];
    }

    return n;

}

vector<int> grayCode(int n)
{
    /* vector<int> res;
    unsigned int num;
    unsigned int target = pow(2, n);
    bool decimalToBinArr[32], binToGCArr[32], binToDecimalArr[32];
    for(unsigned int i=0;i<target;i++)
    {
        memset(decimalToBinArr, 0, sizeof(decimalToBinArr));
        memset(binToGCArr, 0, sizeof(binToGCArr));
        memset(binToDecimalArr, 0, sizeof(binToDecimalArr));

        decimalToBin(i, decimalToBinArr);
        binToGC(decimalToBinArr, binToGCArr);
        num = binToDecimal(binToGCArr);

        res.push_back(num);
    } */

    vector<int> res;
    int target = 1<<(n);
    for(int i=0;i<target;i++)
    {
        res.push_back(i^(i>>1));
    }


    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> res = grayCode(n);
    for (auto i : res)
        cout << i << " ";

    return 0;
}