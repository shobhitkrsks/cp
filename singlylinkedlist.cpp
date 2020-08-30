#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class LinkedList
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int size=0;

    void AddEdge(int data)
    {
        Node *temp = new Node(data);
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            tail->next=temp;
        }
        tail=temp;
        size++;
    }

    void PrintList()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    void DeleteNodeatPos(int p)
    {
        if(p<1)
        {
            cout<<"Invalid Index, please specify index >= 1\n";
        }
        else if(p>size)
        {
            cout<<"Invalid index, position > size\n";
        }
        else if(size==0)
        {
            cout<<"Linked List is already empty, nothing to delete\n";
        }
        else
        {
            if(p==1)
            {
                cout<<"Removed node with data: "<<head->data<<"\n";
                head=head->next;
                if(size==1)
                {
                    tail=head;
                }
            }
            else
            {
                Node* temp=head;
                int curp=1;
                while(curp++<p-1)
                {
                    temp=temp->next;
                }

                cout<<"Removed node with data: "<<temp->next->data<<"\n";

                if(p==size)
                {
                    tail=temp;
                }
                temp->next=temp->next->next;
            }
            size--;
        }
    }

    void GetSize()
    {
        cout<<"Size: "<<size<<"\n";
    }
};

int main()
{
    LinkedList ll;
    int o=0;
    do
    {
        cout<<"\n1.Insert\n2.Print\n3.Delete\n4.Size\n-1.Exit\n";
        cin>>o;
        if(o==1)
        {
            int x;
            cout<<"Enter value? ";
            cin>>x;
            ll.AddEdge(x);
        }
        else if(o==2)
        {
            ll.PrintList();
        }
        else if(o==3)
        {
            int p;
            cout<<"Enter position (Starting Index = 1): ";
            cin>>p;
            ll.DeleteNodeatPos(p);
        }
        else if(o==4)
        {
            ll.GetSize();
        }
    } while (o!=-1);
    
    return 0;
}