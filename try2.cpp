#include <bits/stdc++.h>
using namespace std;

struct comp
{
    bool operator()(pair<int, int> p1, pair<int, int> p2) const
    {
        if (p1.first < p2.first)
            return true;
        else if (p1.first == p2.first)
            return p1.second > p2.second;
        else
            return false;
    }
};

int main()
{
    set<pair<int, int>, comp> s;
    s.insert({3, 1});
    s.insert({2, 2});
    s.insert({1, 3});
    s.insert({1, 4});

    for (auto p : s)
    {
        cout << p.first << " " << p.second << "\n";
    }
}
