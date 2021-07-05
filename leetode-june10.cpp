#include <bits/stdc++.h>
using namespace std;

class MyCalendar
{
public:
    set<pair<int, int>> bookings;
    MyCalendar()
    {
    }

    bool book(int start, int end)
    {
        if(bookings.empty())
        {
            bookings.insert({start,end});
            return true;
        }
        else
        {
            auto itr = bookings.lower_bound({start,end});
            
            if(itr==bookings.begin()) 
            {
                if(end<=itr->first)
                {
                    bookings.insert({start,end});
                    return true;
                }
                else return false;
            }
            else if(itr==bookings.end())
            {
                if(start>=bookings.rbegin()->second)
                {
                    bookings.insert({start,end});
                    return true;
                }
                else return false;
            }
            else
            {
                auto curitr=itr;
                auto previtr=--itr;
                if(start>=previtr->second && end<=curitr->first)
                {
                    bookings.insert({start,end});
                    return true;
                }
                else return false;
            }
        }
    }

    void showBookings() {
        for(auto p: bookings) {
            cout<<p.first<<" "<<p.second<<"\n";
        }
        cout<<"\n";
    }
};

int main()
{
    MyCalendar *obj = new MyCalendar();

    while(true) {
        int start,end;
        cin>>start>>end;
        cout<<obj->book(start,end)<<"\n";
        obj->showBookings();
    }

    return 0;
}