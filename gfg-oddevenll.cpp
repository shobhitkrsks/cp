#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void push(int x,node** head)
{
    node *newnode=new node(x);
    node *temp=*head;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        
        temp->next=newnode;
    }
    
}

void printlist(node** head)
{
    if(*head==NULL) {}
    else
    {
        node* temp=*head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

void seg(node** head)
{
    node* odd=new node(0);
    node* even=new node(0);
    
    node* ho=odd;
    node* he=even;
    
    node* temp=*head;
    
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            he->next=temp;
            he=temp;
        }
        else
        {
            ho->next=temp;
            ho=temp;
        }
        temp=temp->next;
    }
    

    if(even->next!=NULL)
    {
        *head=even->next;
        if(odd->next!=NULL)
        {
            he->next=odd->next;
            ho->next=NULL;
        }
        else
        {
            he->next=NULL;
        }
    }
    else
    {
        if(odd->next!=NULL)
        {
            *head=odd->next;
            ho->next=NULL;
        }
        else
        {
            *head=NULL;
        }
    }
    
    printlist(head);
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        node* head=NULL;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            push(x,&head);
        }
        
        seg(&head);
    }
	return 0;
}