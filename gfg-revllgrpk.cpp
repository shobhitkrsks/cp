#include<bits/stdc++.h>
using namespace std;
/* Link list node */
struct node *reverse (struct node *head, int k);
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};
/* UTILITY FUNCTIONS */
/* Function to push a node */
/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("");
}
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
     int t;
     cin>>t;
     
     while(t--)
     {
         struct node* head = NULL;
         struct node* temp = NULL;
         int n;
         cin >> n;
         
         for(int i = 0;i<n;i++){
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
         }
        
        int k;
        cin>>k;
        head = reverse(head, k);
        printList(head);
    
     }
     
     return(0);
}

/*This is a function problem.You only need to complete the function given below*/
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/
struct node *reverse (struct node *head, int k)
{
    struct node *back=NULL;
    struct node *current=head;
    struct node *ford=head->next;
    int i=k;

    while(i-- && current!=NULL)
    {
        current->next=back;
        back=current;
        current=ford;
        if(ford!=NULL)
            ford=ford->next;
    }
    
    if(current!=NULL)
    {
        head->next=reverse(current,k);
        return back;
    }
    else
    {
        return back;
    }
    
        
}











