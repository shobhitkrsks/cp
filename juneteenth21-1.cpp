#include <bits/stdc++.h>
using namespace std;

const int MAX_CHARS = 100001;
int n;

int findSubString(int str[])
{

	int dist_count = 0;
	bool visited[MAX_CHARS] = { false };
	for (int i = 0; i < n; i++) {
		if (visited[str[i]] == false) {
			visited[str[i]] = true;
			dist_count++;
		}
	}

	int start = 0, start_index = -1, min_len = INT_MAX;

	int count = 0;
	int curr_count[MAX_CHARS] = { 0 };
	for (int j = 0; j < n; j++) {
		curr_count[str[j]]++;

		if (curr_count[str[j]] == 1)
			count++;

		if (count == dist_count) {
			while (curr_count[str[start]] > 1) {
				if (curr_count[str[start]] > 1)
					curr_count[str[start]]--;
				start++;
			}

			int len_window = j - start + 1;
			if (min_len > len_window) {
				min_len = len_window;
				start_index = start;
			}
		}
	}

    return min_len;
}

int saleCost(vector<int>& times, vector<int>& ids) {
    multiset<pair<int,int>> s;
    n=times.size();

    for(int i=0;i<n;i++)
    {
        s.insert({times[i], ids[i]});
    }

    int ar[n];
    int z=0;
    for(auto i:s)
    {
        ar[z++]=i.second;
    }

    return findSubString(ar)*10;
}


int main()
{

    vector<int> times{1,20,21,22,23,24,25};
    vector<int> ids {1,2,2,3,3,3,1};

    cout<<saleCost(times,ids);
	return 0;
}
