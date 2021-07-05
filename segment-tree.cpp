#include<bits/stdc++.h>
using namespace std;
#define INF INT32_MAX

class SegmentTree
{
private:
    int n,*segTreeAr;
    vector<int> ar;

    void buildTree(int curNode, int start, int end) 
    {
        if(start==end)
        {
            segTreeAr[curNode] = ar.at(start);
            return;
        }
        else
        {
            int mid = (start+end)/2;

            buildTree(2*curNode, start, mid);
            buildTree(2*curNode+1, mid+1, end);

            segTreeAr[curNode] = min(segTreeAr[2*curNode], segTreeAr[2*curNode+1]);
        }
    }

    void updateElementUtil(int curNode, int start, int end, int idx, int newValue)
    {
        if(start==end)
        {
            segTreeAr[curNode]=newValue;
            return;
        }
        else
        {
            int mid=(start+end)/2;

            if(idx>=start && idx<=mid)
            {
                updateElementUtil(2*curNode, start, mid, idx, newValue);
            }
            else
            {
                updateElementUtil(2*curNode+1, mid+1, end, idx, newValue);
            }

            segTreeAr[curNode] = min(segTreeAr[2*curNode], segTreeAr[2*curNode+1]);
        }
    }

    int queryUtil(int curNode, int start, int end, int left, int right)
    {
        if(right<start || left<end)
        {
            return INF;
        }
        else if(left>=start && right<=end)
        {
            return segTreeAr[curNode];
        }
        else
        {
            int mid=(start+end)/2;

            int m1=queryUtil(2*curNode, start, mid, left, right);
            int m2=queryUtil(2*curNode+1, mid+1, end, left, right);

            return min(m1,m2);
        }
    }

public:
    SegmentTree(vector<int>& nums)
    {
        n=nums.size();
        ar.assign(nums.begin(), nums.end());
        ar.emplace(ar.begin(),-1);
        segTreeAr=new int[2*n];

        buildTree(1, 1, n);
    };

    void updateElement(int idx, int newValue)
    {
        updateElementUtil(1, 1, n, idx, newValue);
        ar.at(idx) = newValue;
    }

    int query(int left, int right)
    {
        return queryUtil(1, 1, n, left, right);
    }

    ~SegmentTree()
    {
        delete(segTreeAr);
    };
};




int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v;
    int t;
    // v.push_back(-1);
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }


    SegmentTree *st = new SegmentTree(v);

    char c;
    int a,b;

    for(int i=0;i<q;i++)
    {
        cin>>c>>a>>b;

        if(c=='u')
        {
            st->updateElement(a,b);
        }
        else if(c=='q')
        {
            cout<<st->query(a,b)<<"\n";
        }
    }

    st->~SegmentTree();

    delete(st);

    return 0;
}