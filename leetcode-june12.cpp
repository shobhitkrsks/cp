#include<bits/stdc++.h>
using namespace std;

int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations)
{
    int n=stations.size();
    int cd=0;
    int cf=startFuel;
    int stops=0;
    priority_queue<int> pq;
    int i=0;

    while(cd<target)
    {
        cd+=cf;
        cf=0;

        if(cd>=target)
            return stops;

        while(i<n && stations[i][0]<=cd)
        {
            pq.push(stations[i++][1]);
        }

        if(pq.empty())
            return -1;

        cf+=pq.top();
        pq.pop();
        stops++;

    }

    return stops;


}

/*int minRefuelStops(int t, int sf, vector<vector<int>>& st) {
        priority_queue<int>pq;
        int cf=sf;   // current fuel
        int ans=0;
        int cd=0;     // current distance
        int i=0,n=st.size();
        while(cd<t){               // until we won't reach target loop goes on
            cd+=cf;                //  cover distance which we can reach by current fuel  
            cf=0;                     // so now we had cover all distance by the fuel we had so the fuel is over
            if(cd>=t) return ans;          // if the covered distance is greater than target position return the number of stations we used
            while(i<n && st[i][0]<=cd){  // else add all the station's gas which lie in between the distance from previous check point to here
                pq.push(st[i++][1]);  
            }
            if(pq.empty()) return -1;      // if pq is empty means there isn't any station lie between previous check point till here so we can't go ahead so return -1
            cf+=pq.top();                // else add the max gas among all the stations we covered 
            pq.pop();                     // and delete it from the pq
            ans++;                       // and increase the counter
        }
        return ans;
    }
*/
int main()
{
    int target, startFuel, nst;
    vector<vector<int>> st;

    cin>>target>>startFuel>>nst;

    int pos,fuelcap;
    for(int i=0;i<nst;i++)
    {
        vector<int> curst;

        cin>>pos>>fuelcap;
        curst.push_back(pos);
        curst.push_back(fuelcap);

        st.push_back(curst);


    }

    cout<<minRefuelStops(target, startFuel, st)<<"\n";


    return 0;
}