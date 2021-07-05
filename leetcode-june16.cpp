#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void printParenthesis(string s, int open, int close)
{
    if (open == 0 && close == 0)
    {
        v.push_back(s);
        return;
    }
    else if (close<open)
        return;
    else
    {
        if(open>0)
            printParenthesis(s+'(',open-1,close);
        
        if(close>0)
            printParenthesis(s+')',open,close-1);
    }
}

vector<string> generateParenthesis(int n)
{
    printParenthesis("", n, n);
    return v;
}

int main()
{
    int n;
    cin >> n;

    vector<string> temp = generateParenthesis(n);

    for (auto i : v)
    {
        cout << i << "\n";
    }

    return 0;
}