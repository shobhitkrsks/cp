#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        this->data=x;
        this->next=NULL;
    }
};

class Queue
{
private:
    Node *front, *rear;
    int size = 0;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void push(int x)
    {
        Node *temp=new Node(x);

        if(size==0)
        {
            front=temp;
            rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }

        size++; 
        this->print();       
    }

    void pop()
    {
        if(size==0)
            return;

        int x=front->data;

        Node *temp=front->next;
        free(front);
        front=temp;

        size--;
        this->print();
    }

    bool isempty()
    {
        return size==0;
    }

    int sizeq()
    {
        return size;
    }

    void print()
    {
        Node *temp=front;
        cout<<"Size="<<size<<": ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};

int main()
{
    int Q;
    cin>>Q;

    Queue q;

    for(int i=0;i<Q;i++)
    {
        int type;
        cin>>type;

        if(type==1)
        {
            int x;
            cin>>x;
            q.push(x);
        }
        else
        {
            q.pop();
        }
        
    }

    return 0;
}