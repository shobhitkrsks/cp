#include <bits/stdc++.h>
using namespace std;

/* int numMatchingSubseq(string s, vector<string> &words)
{
    int n = words.size();
    int ls = s.length();
    int count = 0;

    for(string word: words)
    {
        int lw=word.length();

        int j=0;
        for(int i=0;i<ls && j<lw; i++)
        {
            if(word[j]==s[i])
                j++;
        }

        if(j==lw)
            count++;
    }

    return count;
}
 */
int numMatchingSubseq(string s, vector<string> &words)
{
    
}

int main()
{
    string s;
    cin >> s;

    vector<string> words;
    string t;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        words.push_back(t);
    }

    cout << numMatchingSubseq(s, words);

    return 0;
}